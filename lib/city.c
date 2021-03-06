#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "city.h"
#include<math.h>

City* createCity(float x, float y, char* name) {
    City *c = (City*) malloc(sizeof(City));
    if(c == NULL){
        printf("insufficient memory");
    }
    strcpy_s(c->name, 50, name);
    c->y = y;
    c->x = x;
    return c;
}

void freeCityInMemory(City* c) {
    free(c);
}

void getCityCoordsAndName(City * c, float* x, float* y, char * name) {
    *x = c->x;
    *y = c->y;
    strcpy_s((char *) &name, 50, c->name);
}

void setCityCoordsAndName(City * c, float x, float y, char name[50]) {
    strcpy_s(c->name,50, name);
    c->y = y;
    c->x = x;
}

float getDistanceBetween(City * c1, City * c2) {
    float dx = c2->x - c1->x;
    float dy = c2->y - c1->y;
    return sqrt(dx*dx + dy*dy);
}

