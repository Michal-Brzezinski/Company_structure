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

	ChangeSalary(432,5600,b);
	ChangeSalary(143, 2400, b);
}

/*
OUTPUT:


Zatrudniono pomyslnie: Jan Brzezinski   id: 333

Zatrudniono pomyslnie: Michael Tobby    id: 143
Jestem stazysta. Nazywam sie Michael Tobby.
Jestem biedakiem i nic nie zarabiam, a przynajmniej nie mam zadnych
informacji o swoim wynagrodzeniu bo jestem nieporadny zyciowo
Zartuje, takie byly warunki zadania


Zatrudniono pomyslnie: Jacek Placek     id: 432
Jestem pracownikiem. Nazywam sie Jacek Placek.
Moje wynagrodzenie to: 4000$

Jestem pracownikiem. Nazywam sie Jan Brzezinski.
Moje wynagrodzenie to: 7000$
Jestem menedzerem firmy. Mam pod soba 2 podwladnych.

Zatrudniono pomyslnie: Michael Mind     id: 466

Zatrudniono pomyslnie: Kot wButach      id: 589
Jestem pracownikiem. Nazywam sie Kot wButach.
Moje wynagrodzenie to: 4200$

Pomyslnie zmieniono wynagrodzenie pracownika Jacek Placek
Zarabia teraz5600

Jestem pracownikiem. Nazywam sie Jacek Placek.
Moje wynagrodzenie to: 5600$

Pomyslnie zmieniono wynagrodzenie stazysty Michael Tobby

Zarabia teraz2400

Jestem stazysta. Nazywam sie Michael Tobby.
Jestem biedakiem i nic nie zarabiam, a przynajmniej nie mam zadnych
informacji o swoim wynagrodzeniu bo jestem nieporadny zyciowo
Zartuje, takie byly warunki zadania*/