#pragma once
#include "Employee.hpp"

using namespace std;

class Intern : public Employee
{
public:
	Intern(string name, string surname,int id ,double salary);
	~Intern();
	void IntroduceYourself() override {
		cout << "Jestem stazysta. Nazywam sie " << c_firstName << " " << c_lastName << ".\n";
		cout << "Jestem biedakiem i nic nie zarabiam, a przynajmniej nie mam zadnych\n";
		cout << "informacji o swoim wynagrodzeniu bo jestem nieporadny zyciowo\n";
		cout << "Zartuje, takie byly warunki zadania\n\n";

	}
};