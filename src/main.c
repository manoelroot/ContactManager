#include <stdio.h>
#include <stdlib.h>

#include "../include/contact.h"
#include "../include/storage.h"

#define MAX_CONTACTS 100

int main(void) {
    Contact contacts[MAX_CONTACTS];
    int count = 0;
    int option;

    loadContacts(contacts, &count);

    do {
        printf("\nContact Manager\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &option) != 1) {
            fprintf(stderr, "Entrada inválida. Saindo.\n");
            break;
        }

        switch (option) {
            case 1:
                if (count >= MAX_CONTACTS) {
                    printf("Limite de contatos atingido.\n");
                } else {
                    addContact(contacts, &count);
                }
                break;
            case 2:
                listContacts(contacts, count);
                break;
            case 3:
                saveContacts(contacts, count);
                printf("Contatos salvos. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (option != 3);

    return 0;
}
