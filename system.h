#pragma once

#include <vector>
#include <string>

#include "car.h"

class System
{
    private:
        std::vector<Car> cars;
        int carCount;
        
    public:
        System();

        void addCar(int year, std::string make, std::string model, int km);
        void deleteCar(int index);
        void showAllCars();
        void rentCar(int carIndex, int days);
        void endRent(int carIndex);
        void carInfo(int carIndex);
};