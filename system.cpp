#include <iostream>
#include <vector>
#include <string>

#include "system.h"

System::System() : cars(0), carCount(0)
{
}

void System::addCar(int year, std::string make, std::string model, int km)
{
    Car newCar(year, make, model, km);
    cars.push_back(newCar);
    carCount++;
}

void System::deleteCar(int year, std::string make, std::string model, int km)
{
    std::string target = std::to_string(year) + make + model + std::to_string(km);

    int size = cars.size();

    for (int x = 0; x < size; x++)
    {
        if (cars[x].findCar() == target)
        {
            cars.erase(cars.begin() + x);
            break;
        }
        else
        {
            std::cout << "No such car" << std::endl;
        }
    }

    carCount--;
}

void System::showAllCars()
{
    int size = cars.size();

    for (int x = 0; x < size; x++)
    {
        cars[x].showInfo();
    }

    std::cout << "Total cars: " << carCount << std::endl;
}
