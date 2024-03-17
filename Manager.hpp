#pragma once
#include "Intern.hpp"
#include "Employee.hpp"
//#include "Functions.hpp"
#include <vector>

using namespace std;

class Manager : public Employee
{
public:
	int no_reports=0;
	Manager(string name, string surname, int id, double salary);
	void IntroduceYourself() override {
		cout<<endl;
		Employee::IntroduceYourself();
		cout << "Jestem menedzerem firmy. Mam pod soba "<< no_reports<<" podwladnych.\n";
	}
	//friend void ChangeSalary(int id, double new_salary, Manager& a);

	vector<Employee>employees;
	vector<Intern>interns;
};