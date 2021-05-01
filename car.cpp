#include <iostream>
#include <string>

#include "car.h"


Car::Car()
{}

Car::Car(int year, std::string make, std::string model, int km)
    : m_year(year),
      m_make(make),
      m_model(model),
      m_km(km),
      m_status("Ready to go")
{}

void Car::showInfo()
{
  std::cout << m_year << " " << m_make << " " << m_model << " " << m_km << "km" << std::endl;
  std::cout << "Status: " << m_status << "\n" << std::endl;
}

void Car::setStatus(int status)
{
  switch (status)
  {
    case 1:
      m_status = "Ready to go";
    case 2:
      m_status = "Rented";
    case 3:
      m_status = "Undergoing maintenance";
  }
}

