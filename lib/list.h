#ifndef ABSTRACT_DATA_TYPES_LIST_H
#define ABSTRACT_DATA_TYPES_LIST_H

#include "point.h"

typedef struct list {
    City*  data;
    struct list* next;
} List;

List*  initialize();

List*  insert(List* l, City* c);

int isEmpty(List* l);

void printItems(List* l);

List*  findItem(List* l, int v);

List* removeItem(List* l, City* c);

void freeList(List* l);

#endif //ABSTRACT_DATA_TYPES_LIST_H
