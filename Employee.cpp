#include "Employee.hpp"

Employee::Employee(std::string firstname, std::string lastname,int id, double salary) : c_firstName(firstname), c_lastName(lastname),c_id(id), c_salary(salary)
{
	std::cout << "\nZatrudniono pomyslnie: "<<firstname<<" "<<lastname<<"\tid: " <<id<< std::endl;
};
Employee::~Employee()
{};

int Employee::get_id()
{
	return c_id;
}