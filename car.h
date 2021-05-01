#pragma once 

#include <string>

class Car 
{
    private:
        int m_year, m_km;
        std::string m_make, m_model, m_status;

    public:
        Car();
        Car(int year, std::string make, std::string model, int km);

        void showInfo();
        void setStatus(int status);
};
