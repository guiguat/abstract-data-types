#include "point.h"
#include "route.h"
#include "list.h"

int main() {
    List* listOfCities = initializeList();
    listOfCities = insertListItem(listOfCities, createCity(8,10, "city6"));
    listOfCities = insertListItem(listOfCities, createCity(5,19, "city5"));
    listOfCities = insertListItem(listOfCities, createCity(16,15, "city4"));
    listOfCities = insertListItem(listOfCities, createCity(19,8, "city3"));
    listOfCities = insertListItem(listOfCities, createCity(10,4, "city2"));
    listOfCities = insertListItem(listOfCities, createCity(2,2, "city1"));
    printReport(listOfCities);
    return 0;
}
