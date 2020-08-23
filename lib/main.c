#include "point.h"
#include "route.h"
int main() {
    City* cities[6] = {
        createCity(2, 2, "shenzhen"),
        createCity(10, 4, "taipei"),
        createCity(19, 8, "chongqing"),
        createCity(16, 15, "beijing"),
        createCity(5, 19, "shanghai"),
        createCity(8, 10, "taiwan"),
    };
    printReport(cities);
    return 0;
}
