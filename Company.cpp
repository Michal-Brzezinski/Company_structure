#include "Functions.hpp"
#include <iostream>
#include <string>



int main()
{

	Manager b("Jan", "Brzezinski",333 ,7000);
	Intern a = add_intern("Michael","Tobby",143,2000,b);
	a.IntroduceYourself();
	Employee c = add_employee("Jacek", "Placek",432 ,4000,b);
	c.IntroduceYourself();
	b.IntroduceYourself();
	Intern d = add_intern("Michael", "Mind", 466, 2000, b);
	Employee e = add_employee("Kot", "wButach", 589, 4200, b);
	e.IntroduceYourself();

	ChangeSalary(589,4600,b);
	e.IntroduceYourself();
}
