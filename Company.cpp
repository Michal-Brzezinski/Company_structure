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
	
}
