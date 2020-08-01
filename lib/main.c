#include "point.h"
#include "route.h"
int main() {
    City* cities[6] = {
        createCity(3, 4, "shenzhen"),
        createCity(6, 8, "taipei"),
        createCity(9, 16, "chongqing"),
        createCity(12, 20, "beijing"),
        createCity(15, 24, "shanghai"),
        createCity(18, 28, "taiwan"),
    };
    printReport(cities);
    return 0;
}
