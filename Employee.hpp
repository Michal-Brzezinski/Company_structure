#pragma once
//#include "Manager.hpp"
#include <iostream>
#include <string>

class Manager;

class Employee {


private:
    double c_salary;
protected:

    std::string c_firstName;
    std::string c_lastName;
    int c_id;

public:

    Employee(std::string firstname, std::string lastname,int id ,double salary);
    ~Employee();
    int get_id();
    friend void ChangeSalary(int id, double new_salary, Manager& a);
    virtual void IntroduceYourself() {
        std::cout << "Jestem pracownikiem. Nazywam sie " << c_firstName << " " << c_lastName << ".\n";
        std::cout << "Moje wynagrodzenie to: " << c_salary<<"$" << std::endl;
    }

};