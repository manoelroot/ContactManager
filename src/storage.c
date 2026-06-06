#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include "../include/storage.h"

void saveContacts(Contact contacts[], int count) {
    if (mkdir("data", 0755) != 0 && errno != EEXIST) {
        perror("Não foi possível criar diretório data");
        return;
    }

    FILE *file = fopen("data/contacts.txt", "w");
    if (!file) {
        perror("Não foi possível abrir o arquivo de contatos");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s\n", contacts[i].name, contacts[i].phone);
    }

    fclose(file);
}

void loadContacts(Contact contacts[], int *count) {
    FILE *f = fopen("data/contacts.txt", "r");
    if (!f) {
        return;
    }

    while (fscanf(f, "%99[^,],%19[^\n]\n", contacts[*count].name, contacts[*count].phone) == 2) {
        (*count)++;
    }

    fclose(f);
}
