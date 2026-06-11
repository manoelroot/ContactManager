#include <stdio.h>
#include <stdlib.h>

#include "../include/contact.h"
#include "../include/storage.h"

#define MAX_CONTACTS 100

int main(void) {
  Contact contacts[MAX_CONTACTS];
  int count = 0;
  int option;
  int c;

  loadContacts(contacts, &count);

  do {
    printf("\n===Contact Manager===\n");
    printf("1. Adicionar contato\n");
    printf("2. Listar contatos\n");
    printf("3. Buscar contato\n");
    printf("4. Remover contato\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: \n");

    if (scanf("%d", &option) != 1) {
      fprintf(stderr, "Entrada inválida. Saindo.\n");
      break;
    }

    while ((c = getchar()) != '\n' && c != EOF)
      ;

    switch (option) {
    case 1:
      if (count >= MAX_CONTACTS)
        printf("Limite de contatos atingido.\n");
      else
        addContact(contacts, &count);
      break;
    case 2:
      listContacts(contacts, count);
      break;
    case 3:
      searchContacts(contacts, count);
      break;
    case 4:
      removeContact(contacts, &count);
      break;
    case 5:
      saveContacts(contacts, count);
      printf("Contatos salvos. Até logo!\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (option != 5);

  return 0;
}
