#include "Student.h"
#include <iostream>

Student::Student(std::string name, int year, 
	             int fn, std::string program, int course):
	Person(name, year),
	fn(fn),
	program(program),
	year(course)
{}

std::ostream & operator<<(std::ostream &out, const Student &s)
{
	out << (const Person&)s << std::endl;
	out << "Faculty number: " << s.fn << std::endl;
	out << "Program: " << s.program << std::endl;
	out << "Course: " << s.year << std::endl;
	return out;
}

std::istream & operator>>(std::istream &ent, Student &s)
{
	ent >> (Person&)s;
	std::cout << "Faculty number: "; ent >> s.fn;
	std::cout << "Program: "; ent >> s.program;
	std::cout << "Course: "; ent >> s.year;
	return ent;
}
