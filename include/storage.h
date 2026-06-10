#ifndef STORAGE_H 
#define STORAGE_H 

#include "contact.h"

// Prototipo de função para salvar os contatos em um arquivo.
void saveContacts(
    Contact contacts[],
    int count
);

// Prototipo de função para carregar os contatos do arquivo.
void loadContacts(
    Contact contacts[],
    int *count 
);

// Prototipo de função para remover um contato do arquivo.

// Prototipo de função para buscar um contato por nome no arquivo.

// As funções removeContact e findContact ainda precisam ser implementadas, mas os protótipos já estão definidos para futuras implementações.

#endif 