#include "Person.h"
#include <iostream>


Person::Person()
{
}

Person::Person(std::string name, int year):name(name), year(year)
{}

std::ostream & operator<<(std::ostream &out, const Person &p)
{
	out << p.name << ", " << p.year;
	return out;
}

std::istream & operator>>(std::istream &ent, Person &p)
{
	std::cout << "Name: "; ent >> p.name;
	std::cout << "Year: "; ent >> p.year;
	return ent;
}
