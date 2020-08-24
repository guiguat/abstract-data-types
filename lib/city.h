//
// Created by Guilherme Guatura on 31/07/2020.
//
#ifndef ABSTRACT_DATA_TYPES_CITY_H
#define ABSTRACT_DATA_TYPES_CITY_H
struct city {
    float x;
    float y;
    char name[50];
};
/* ADT: City (x,y, name) */
/* Exported Type */
typedef struct city City;

/* Exported Functions */

/* Function createCity
** Allocates and return a new city with coordinates (x,y) and name
*/
City* createCity(float x, float y, char* name);

/* Function freeCityInMemory
** Frees memory of a previously created city
*/
void freeCityInMemory(City* c);

/* Function getCityCoordsAndName
** Returns the coordinates and name of a city
*/
void getCityCoordsAndName(City * c, float* x, float* y, char * name);

/* Function setCityCoordsAndName
** Sets new values for a city x,y coordinates and name
*/
void setCityCoordsAndName(City * c, float x, float y, char name[50]);

/* Function getDistanceBetween
** Return the distance between two cities
*/
float getDistanceBetween(City * c1, City * c2);
#endif //ABSTRACT_DATA_TYPES_CITY_H
