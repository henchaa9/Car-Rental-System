#include <iostream>
#include <string>

#include "car.h"


Car::Car()
{}

Car::Car(int year, std::string make, std::string model, int km)
    : m_year(year),
      m_make(make),
      m_model(model),
      m_km(km)
{}

void Car::showInfo()
{
  std::cout << m_year << " " << m_make << " " << m_model << " " << m_km << "km" << std::endl;
}
