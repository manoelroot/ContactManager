#ifndef CONTACT_H
#define CONTACT_H 

#define MAX_NAME 100 
#define MAX_PHONE 20 

typedef struct {
    char name[MAX_NAME];
    char phone[MAX_PHONE];
} Contact;

void addContact(Contact contacts[], int *count); // Prototipo de função para adicionar um contato.
void listContacts(Contact contacts[], int count); // Prototipo de função para listar os contatos.
void removeContact(Contact contacts[], int *count); // Prototipo de função para remover um contato.
int findContact(Contact contacts[], int id); // Prototipo de função para buscar um contato por ID.


#endif 
// Prototipo de função para buscar um contatos por nome. 
// Podde ser melhorada para retornar um ponteiro para o contato encontrado ou NULL se não encontrado. 