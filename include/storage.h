#ifndef STORAGE_H
#define STORAGE_H

#include "contact.h"

void saveContacts(Contact contacts[], int count);
void loadContacts(Contact contacts[], int *count);

#endif
