#include <stdio.h>
#include "../include/contact.h"

// Função para adicionar um novo contato à lista.
void addContact(Contact contacts[], int *count) {
    printf("Inserir nome do contato: \n");
    scanf("%99s", contacts[*count].name);

    printf("Inserir telefone do contato: \n");
    scanf("%19s", contacts[*count].phone);

    (*count)++;
}

// Funçao para listar os contatos armazenados. 
void listContacts(Contact contacts[], int count) {
    if (count == 0) {
        printf("Nenhum contato encontrado!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s | Telefone: %s\n", contacts[i].name, contacts[i].phone);
    }
}
// As funções removeContact e findContact ainda precisam ser implementadas.




