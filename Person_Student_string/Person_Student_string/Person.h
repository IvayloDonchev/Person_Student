#pragma once
#include <string>
class Person
{
public:
	Person();
	Person(std::string, int);
	Person(const Person&) = default;
	Person(Person&&) = default;
	Person& operator=(const Person&) = default;
	Person& operator=(Person&&) = default;
	virtual ~Person()=default;
	friend std::ostream& operator<<(std::ostream&, const Person&);
	friend std::istream& operator>>(std::istream&, Person&);
private:
	std::string name;
	int year;
};

