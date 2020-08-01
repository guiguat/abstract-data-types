#include "point.h"
#include "route.h"
int main() {
    City* cities[6] = {
        createCity(3, 4, "shenzhen"),
        createCity(6, 8, "taipei"),
        createCity(9, 12, "chongqing"),
        createCity(12, 16, "beijing"),
        createCity(15, 20, "shanghai"),
        createCity(18, 24, "taiwan"),
    };
    printReport(cities);
    return 0;
}
