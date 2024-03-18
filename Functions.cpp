#include "Functions.hpp"


Employee add_employee(string f_name, string f_surname,int f_id ,double f_salary, Manager& b)
{
	Employee a(f_name, f_surname,f_id ,f_salary);
	b.no_reports++;
	b.employees.push_back(a);
	return a;
}
Intern add_intern(string fu_name, string fu_surname,int fu_id ,double fu_salary, Manager& b)
{
	Intern a(fu_name, fu_surname, fu_id, fu_salary);
	b.no_reports++;
	b.interns.push_back(a);
	return a;
}

Employee& find_Employee(int id, Manager& a)
{
	for (int i = 0; i < a.employees.size(); i++)
	{
		if (id == a.employees.at(i).get_id()) return a.employees.at(i);
	}
	return a.employees.at(0);
}

Intern& find_Intern(int id, Manager& a)
{
	for (int i = 0; i < a.interns.size(); i++)
	{
		if (id == a.interns.at(i).get_id()) return a.interns.at(i);
	}
	return a.interns.at(0);

}

void ChangeSalary(int id, double new_salary, Manager& a)
{
	Employee d = find_Employee(id, a);
	Intern e = find_Intern(id, a);

	if (id == d.get_id())
	{
		d.c_salary = new_salary;
		std::cout << "\nPomyslnie zmieniono wynagrodzenie pracownika " << d.c_firstName << " " << d.c_lastName<<"\n\n";
	}
	
	
	else if (id == e.get_id())
	{
		e.c_salary = new_salary;
		std::cout << "\nPomyslnie zmieniono wynagrodzenie stazysty "<<e.c_firstName<< " "<< e.c_lastName<<"\n\n";
	}


	else std::cout << "Nie znaleziono podanego zatrudnionego";
}