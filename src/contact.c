#include "../include/contact.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addContact(Contact contacts[], int *count)
{
    printf("\n=== NOVO CONTATO ===\n");
    printf("Nome: ");
    fgets(contacts[*count].name, MAX_NAME, stdin);
    contacts[*count].name[strcspn(contacts[*count].name, "\n")] = '\0';
    printf("Telefone: ");
    fgets(contacts[*count].phone, MAX_PHONE, stdin);
    contacts[*count].phone[strcspn(contacts[*count].phone, "\n")] = '\0';
    contacts[*count].id = *count + 1;
    (*count)++;
    printf("\nContato adicionado.\n");
}

void listContacts(Contact contacts[], int count)
{
    int i;

    if (count == 0) {
        printf("\nNenhum contato.\n");
        return;
    }

    printf("\n=== CONTATOS ===\n");

    for (i = 0; i < count; i++) {
        printf("\n[%d]\nNome: %s\nTelefone: %s\n",
               contacts[i].id,
               contacts[i].name,
               contacts[i].phone);
    }
}

void searchContacts(Contact contacts[], int count)
{
    int i;
    int found = 0;
    char term[MAX_NAME];

    if (count == 0) {
        printf("\nNenhum contato.\n");
        return;
    }

    printf("\nTermo de busca: ");
    fgets(term, MAX_NAME, stdin);
    term[strcspn(term, "\n")] = '\0';

    if (term[0] == '\0') {
        printf("\nTermo vazio. Digite um nome ou telefone.\n");
        return;
    }

    printf("\n=== RESULTADO DA BUSCA ===\n");
    for (i = 0; i < count; i++) {
        if (strstr(contacts[i].name, term) != NULL ||
            strstr(contacts[i].phone, term) != NULL) {
            printf("\n[%d]\nNome: %s\nTelefone: %s\n",
                   contacts[i].id,
                   contacts[i].name,
                   contacts[i].phone);
            found = 1;
        }
    }

    if (!found)
        printf("\nNenhum contato encontrado para '%s'.\n", term);
}

int findContact(Contact contacts[], int count, const char *query)
{
    int i;
    char *endptr;
    long id;

    for (i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, query) == 0 ||
            strcmp(contacts[i].phone, query) == 0)
            return i;
    }

    id = strtol(query, &endptr, 10);
    if (*query != '\0' && *endptr == '\0') {
        for (i = 0; i < count; i++) {
            if (contacts[i].id == id)
                return i;
        }
    }

    return -1;
}

void removeContact(Contact contacts[], int *count)
{
    int i;
    int index;
    char term[MAX_NAME];
    int confirm;
    int c;

    if (*count == 0) {
        printf("\nLista vazia.\n");
        return;
    }

    printf("\nNome, telefone ou ID do contato: ");
    fgets(term, MAX_NAME, stdin);
    term[strcspn(term, "\n")] = '\0';

    if (term[0] == '\0') {
        printf("\nTermo vazio. Nenhum contato removido.\n");
        return;
    }

    index = findContact(contacts, *count, term);
    if (index == -1) {
        printf("\nContato nao encontrado.\n");
        return;
    }

    printf("\nContato encontrado:\n[%d] %s | %s\n",
           contacts[index].id,
           contacts[index].name,
           contacts[index].phone);
    printf("Confirmar remocao? (s/N): ");
    confirm = getchar();
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    if (confirm != 's' && confirm != 'S') {
        printf("\nRemocao cancelada.\n");
        return;
    }

    for (i = index; i < *count - 1; i++)
        contacts[i] = contacts[i + 1];

    (*count)--;

    for (i = 0; i < *count; i++)
        contacts[i].id = i + 1;

    printf("\nContato removido.\n");
}
