#include "Person.h"
#include <string>
#include <queue>
#include <iomanip>
using namespace std;

Person::Person()
{
	Name = "name";
	Surname = "surname";
	Priority = 0;
}

Person::Person(string _name, string _surname, int _pri)
{
	Name = _name;
	Surname = _surname;
	Priority = _pri;
	Count++;
	id = Count;
}

int Person::GetCount()
{
	return Count;
}

int Person::GetTime()
{
	return time;
}

int Person::GetPriority()
{
	return Priority;
}

void Person::SetId(int _id)
{
	id = _id;
}

void Person::Increementtime()
{
	time += 5;
}




ostream& operator<<(ostream& os, Person& per)
{
	 os <<setw(2)<< per.id << setw(10) << per.Name << setw(12) << per.Surname << setw(16);
	switch (per.Priority)
	{
	case(0):os << "Visitor "; break;
	case(1):os << "Student "; break;
	case(2):os << "Teacher "; break;
	case(3):os << "Administrator "; break;
	}

	if (per.time == 0)
		os << " "<<endl;
	else
	{
		os <<setw(5)<< per.time <<" sec" << endl;
	}
	return os;
}
int Person::Count = 0;
int Person::time = 0;