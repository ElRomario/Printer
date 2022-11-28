#pragma once
#include <string>
#include <iostream>
using namespace std;


class Person
{
private:
	string Name;
	string Surname;
	int Priority;
	int id;
public:
	static int Count;
	static int time;
	Person();
	Person(string _name, string _surname, int _pri);
	int GetCount();
	int GetTime();
	int GetPriority();
	void SetId(int _id);
	static void Increementtime();
	friend ostream& operator <<(ostream & os, Person & per );
};




