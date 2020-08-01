#include "route.h"
#include <stdio.h>
#include <stdlib.h>

float calculateTotalDistance(City** cities){
    float totalDistance = 0;
    for (int i=0; i<5; i++){
        totalDistance += getDistanceBetween(cities[i], cities[i+1]);
    }
    return totalDistance;
}
void printReport(City* cities[6]){
    printf("Origin    Destiny    Distance(km)\n");
    for (int i=0; i<5; i++){
        printf("%s    %s    %5.2f\n", cities[i]->name, cities[i+1]->name, getDistanceBetween(cities[i], cities[i+1]));
    }
    printf("Total distance: %5.2f", calculateTotalDistance(cities));
}