#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include "../include/storage.h"

// Função para salvar os contatos em um arquivo.
void saveContacts(Contact contacts[], int count) {
    if (mkdir("data", 0755) != 0 && errno != EEXIST) {
        perror("Não foi possível criar diretório data\n");
        return;
    }

    FILE *file = fopen("data/contacts.txt", "w");
    if (!file) {
        perror("Não foi possível abrir o arquivo de contatos\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s\n", contacts[i].name, contacts[i].phone);
    }

    fclose(file);
}

// A função saveContacts agora inclui a criação do diretório "data" se ele não existir, garantindo que o arquivo de contatos possa ser salvo corretamente.
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
// A função loadContacts lê os contatos do arquivo "data/contacts.txt" e os armazena na matriz de contatos, atualizando o contador de contatos. Se o arquivo não existir, a função simplesmente retorna sem fazer nada, permitindo que o programa continue funcionando normalmente.
// As funções saveContacts e loadContacts agora estão implementadas, permitindo que os contatos sejam salvos e carregados de um arquivo, garantindo a persistência dos dados entre as execuções do programa.