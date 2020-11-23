#include "Water.h"
#include<iostream>
#include <cstring>

using namespace std;

void Water::setName(const char* name)
{
	if (name == nullptr || strlen(name) == 0)
	{
		return;
	}
	if (this->name != nullptr)
	{
		delete[] this->name;
	}
	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
}

const char* Water::getName() const
{
	return name;
}



const char* Water::getReservoirStr() const
{
	static const char* nameRes[]{ "Lake", "Sea", "River", "Undefined" };
	return nameRes[(int)res];
}

Water::Water(const char* name, Reservoirs res)
{
	setName(name);
	setReservoirs(res);
}

Water::Water()
	: Water("error") // no name
{}

Water::~Water()
{
	cout << (name != nullptr ? name : "Empty") << endl;
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
	// max size, long
}

void Water::print() const
{
	cout << "Name :\t" << name << endl;
	cout << "Gender :\t" << getReservoirStr() << endl;
	/*for (size_t i = 0; i < qtyMarks; i++)
	{
		cout << marks[i] << "\t";
	}*/
	cout << endl;
	//cout << "Average mark : " << this->getAverageMark() << endl;
}
