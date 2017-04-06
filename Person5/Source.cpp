#include"Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	Student s1("Ivan Ivanov", 1990, "18101", "Informatics", 4);
	cout << s1 << endl;

	Student s2(s1);
	cout << s2 << endl;

	Student s3;
	s3 = s1;
	cout << s3 << endl;

}