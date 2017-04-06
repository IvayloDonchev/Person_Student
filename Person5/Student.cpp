#include "Student.h"



Student::Student() : Person(),
	programme(nullptr), faknum(nullptr), semester(0)
{}

Student::Student(char *n, int y, char *f, char *p, int s) :
	Person(n,y),
	faknum(new char[strlen(f)+1]),
	programme(new char[strlen(p)+1]),
	semester(s)
{
	strcpy_s(faknum, strlen(f) + 1, f);
	strcpy_s(programme, strlen(p) + 1, p);
}

Student::Student(const Student &s) : 
	     Person(s),  // извиква копиращия конструктор на базовия клас
         faknum(new char[strlen(s.faknum)+1]),
	     programme(new char[strlen(s.programme)+1]),
	     semester(s.semester)
{
	strcpy_s(faknum, strlen(s.faknum) + 1, s.faknum);
	strcpy_s(programme, strlen(s.programme) + 1, s.programme);
}

Student & Student::operator=(const Student &s)
{
	if (this == &s) return *this;
	Person::operator=(s);
	if (faknum) delete[] faknum;
	int size = strlen(s.faknum) + 1;
	faknum = new char[size];
	strcpy_s(faknum, size, s.faknum);
	if (programme) delete[] programme;
	size = strlen(s.programme) + 1;
	programme = new char[size];
	strcpy_s(programme, size, s.programme);
	semester = s.semester;
	return *this;
}

Student::~Student()
{
	if (faknum) delete[] faknum;
	if (programme) delete[] programme;
}

std::ostream & operator<<(std::ostream &out, const Student &s)
{
	out << (const Person&)s << std::endl;
	out << "Faculty number: " << s.faknum << std::endl;
	out << "Programme: " << s.programme << std::endl;
	out << "Semester: " << s.semester << std::endl;
	return out;
}
