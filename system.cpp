#include <iostream>
#include <vector>
#include <string>

#include "system.h"

System::System() : cars(1), carCount(0)
{
}

void System::addCar(int year, std::string make, std::string model, int km)
{
    carCount++;
    Car newCar(year, make, model, km);
    cars.insert(cars.begin() + carCount, newCar);
}

void System::deleteCar(int index)
{
    int size = cars.size();

    if ((index >= size) || (index == 0))
    {
        std::cout << "No such car!" << std::endl;
    }
    else
    {
        std::vector<Car>::iterator it;
        it = cars.begin() + index;
        cars.erase(it);
        carCount--;
    }
}

void System::showAllCars()
{
    int size = cars.size();

    if (size > 1)
    {
        for (int x = 1; x < size; x++)
        {
            std::cout << x << ". ";
            cars[x].showInfo();
        }
    }
    else
    {
        std::cout << "No cars in the system!" << std::endl;
    }

    std::cout << "Total cars: " << carCount << std::endl;
}
