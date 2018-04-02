#pragma once
#include "Person.h"
class Student :
	public Person
{
private:
	int fn;
	std::string program;
	int year;
public:
	Student()=default;
	Student(std::string, int, int, std::string, int);
	Student(const Student&) = default;
	Student(Student&&) = default;
	Student& operator=(const Student&) = default;
	Student& operator=(Student&&) = default;
	~Student()=default;
	friend std::ostream& operator<<(std::ostream&, const Student&);
	friend std::istream& operator>>(std::istream&, Student&);
};

