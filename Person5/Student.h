#pragma once
#include "Person.h"
#include <iostream>
class Student :
	public Person
{
public:
	Student();
	Student(char*, int, char*, char*, int);
	Student(const Student&);  // copy constructor
	Student& operator=(const Student&); // copy assignment
	~Student();
	friend std::ostream& operator << (std::ostream&, const Student&);
private:
	char* faknum;
	char* programme;
	int semester;
};

