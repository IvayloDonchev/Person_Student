#pragma once
#include <iostream>
class Person
{
public:
	Person();							//default constructor
	Person(char*, int);					//constructor
	Person(const Person&);				//copy constructor
	Person(Person&&);					//move constructor
	~Person();							//destructor
	Person& operator=(const Person&);	//copy assignment
	Person& operator=(Person&&);		//move assignment
	friend std::ostream& operator << (std::ostream&, const Person&);
	friend std::istream& operator >> (std::istream&, Person&);
	void Read();
	void Show();
private:
	char* name;
	int year;
};

