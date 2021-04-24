#include <iostream>
#include <string>

#include "car.h"


Car::Car()
    : m_year(1800),
      m_make("honda"),
      m_model("civic"),
      m_km(69420)
{}

Car::Car(int year, std::string make, std::string model, int km)
    : m_year(year),
      m_make(make),
      m_model(model),
      m_km(km)
{}

Car::~Car()
{}

void Car::showInfo()
{
  std::cout << m_year << " " << m_make << " " << m_model << " " << m_km << "km" << std::endl;
}

std::string Car::findCar()
{
  return std::to_string(m_year) + m_make + m_model + std::to_string(m_km);
}