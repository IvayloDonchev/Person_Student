#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
	Student s1("Ivan Ivanov", 1990, 18100, "Informatics", 2);
	cout << s1 << endl;
	cin >> s1;
	Student s2{ s1 };
	cout << s2 << endl;

	system("pause");
	

}