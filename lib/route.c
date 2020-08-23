#include "route.h"
#include "list.h"
#include <stdio.h>

float calculateTotalDistance(List* cities){
    float totalDistance = 0;
    List* p;
    for (p=cities; p != NULL && p->next != NULL ; p=p->next){
        totalDistance += getDistanceBetween(p->data, p->next->data);
    }
    totalDistance += getDistanceBetween(cities->data, p->data);
    return totalDistance;
}
void printReport(List* cities){
    List* p = cities;
    while(!isEmptyList(p) && !isEmptyList(p->next)){
        printf(
        "Origin: %s Destiny: %s Distance: %5.2f\n",
        p->data->name, p->next->data->name,
        getDistanceBetween(p->data, p->next->data));
        p = p->next;
    }
    printf("Total distance: %5.2f", calculateTotalDistance(cities));
    freeList(cities);
}