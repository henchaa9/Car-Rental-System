#include <iostream>
#include "car.h"
#include "system.h"


int main()
{
    System sys1;
    sys1.addCar(1909, "bebe", "vrum", 69420);
    sys1.showAllCars();
    sys1.deleteCar(1); //fix this
    sys1.showAllCars();
}


