#include <iostream>
#include "car.h"
#include "system.h"


int main()
{
    System sys1;
    sys1.addCar(2003, "volkswagen", "sharan", 200000);
    sys1.showAllCars();
    sys1.rentCar(1, 2);
    sys1.carInfo(1);
}


