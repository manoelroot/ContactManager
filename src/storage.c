#include "../include/storage.h"
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

void saveContacts(Contact contacts[], int count) {
  int i;
  FILE *file;

  if (mkdir("data", 0755) != 0 && errno != EEXIST) {
    perror("Não foi possível criar diretório data");
    return;
  }

  file = fopen("data/contacts.txt", "w");
  if (!file) {
    perror("Não foi possível abrir o arquivo de contatos");
    return;
  }

  for (i = 0; i < count; i++)
    fprintf(file, "%s,%s\n", contacts[i].name, contacts[i].phone);

  fclose(file);
}

void loadContacts(Contact contacts[], int *count) {
  FILE *f;

  f = fopen("data/contacts.txt", "r");
  if (!f)
    return;

  while (fscanf(f, "%99[^,],%19[^\n]\n", contacts[*count].name,
                contacts[*count].phone) == 2) {
    contacts[*count].id = *count + 1;
    (*count)++;
  }

  fclose(f);
}
