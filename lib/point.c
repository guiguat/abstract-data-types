#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "point.h"


City* createCity(float x, float y, char* name) {
    City *c = (City*) malloc(sizeof(City));
    if(c == NULL){
        printf("insufficient memory");
    }
    strcpy(c->name, name);
    c->y = y;
    c->x = x;
    return c;
}

void freeCityInMemory(City* c) {  }

City getCityCordsAndName(City * c, float* x, float* y, char * name) {  }

void setCityCordsAndName(City * c, float x, float y, char name[50]) {  }

float getDistanceBetween(City * c1, City * c2) {  }

