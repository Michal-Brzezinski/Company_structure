#pragma once 
#include "Manager.hpp"
Intern add_intern(string fu_name, string fu_surname, int id, double fu_salary, Manager& b);
Employee add_employee(string f_name, string f_surname, int id, double f_salary, Manager& a);

Employee& find_Employee(int id, Manager& a);
Intern& find_Intern(int id, Manager& a);
void ChangeSalary(int id, double new_salary,Manager& a);