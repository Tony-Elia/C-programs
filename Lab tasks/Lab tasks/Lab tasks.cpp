// Lab tasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct employee {
	int id;
	char name2[5];
	int salary;
};
struct organization {
	string name1;
	int num;
	employee empl;
};

void show(organization* point) {
	cout << point->name1 << " " << point->num << endl;
	cout << point->empl.name2 << " " << point->empl.id << " " << point->empl.salary << endl;
}

int main()
{
	organization org = { "Dell", 111, {278, "Paul", 5000} };
	organization* point = &org;
	show(point);
	return 0;
}