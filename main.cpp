#include <iostream>
#include "car.h"
#include "system.h"


int main()
{
    System sys1;
    sys1.addCar(2004, "volkswagen", "sharan", 200000);
    sys1.addCar(2008, "volkswagen", "beetle", 199934);
    sys1.rentCar(1,1);
    sys1.showAllCars();
    sys1.endRent(1);
}


