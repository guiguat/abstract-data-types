#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List*  initializeList(){
    return NULL;
}

List*  insertListItem(List* l, City* c) {
    List* newItem = (List*) malloc(sizeof(List));
    newItem->data = c;
    newItem->next = l;
    return newItem;
}

int isEmptyList(List* l) {
    return (l == NULL);
}

void printListItems(List* l) {
    if(isEmptyList(l)) return;
    printf(
        "%s: x=%5.2f, y=%5.2f",
        l->data->name,
        l->data->x, l->data->y
    );
    printListItems(l->next);
}

List*  findListItem(List* l, City* c) {
    if(isEmptyList(l)) return NULL;
    if(l->data == c){
        return l;
    }
    else{
        l->next = findListItem(l->next, c);
    }
    return l;
}

List* removeListItem(List* l, City* c) {
    if (isEmptyList(l))
        return l;

    if (l->data == c) {
        List* p = l;
        l = l->next;
        free(p);
    }
    else {
        l->next = removeListItem(l->next,c);
    }
    return l;
}

void freeList(List* l) {
    if(!isEmptyList(l)){
        freeList(l->next);
        free(l);
    }
}
