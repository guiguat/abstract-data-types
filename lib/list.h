#ifndef ABSTRACT_DATA_TYPES_LIST_H
#define ABSTRACT_DATA_TYPES_LIST_H

#include "city.h"

typedef struct list {
    City*  data;
    struct list* next;
} List;

List*  initializeList();

List*  insertListItem(List* l, City* c);

int isEmptyList(List* l);

void printListItems(List* l);

List*  findListItem(List* l, City* c);

List* removeListItem(List* l, City* c);

void freeList(List* l);

#endif //ABSTRACT_DATA_TYPES_LIST_H
