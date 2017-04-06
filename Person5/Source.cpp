#include"Person.h"
#include <iostream>
using namespace std;

int main()
{
	Person p;
	cin >> p;
	cout << p << endl;

	Person p2{ p };
	p = p2;
	cout << p << endl;
}