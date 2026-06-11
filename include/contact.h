#ifndef CONTACT_H
#define CONTACT_H

#define MAX_NAME 100
#define MAX_PHONE 20

typedef struct {
    int id;
    char name[MAX_NAME];
    char phone[MAX_PHONE];
} Contact;

void addContact(Contact contacts[], int *count);
void listContacts(Contact contacts[], int count);
void searchContacts(Contact contacts[], int count);
int findContact(Contact contacts[], int count, const char *query);
void removeContact(Contact contacts[], int *count);

#endif
