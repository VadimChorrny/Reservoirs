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

void Water::setSize(size_t size) const
{
	if (size >= 1 && size <= 80)
	{
		size = sizeWater;
	}
	else {
		cout << "ERROR!!! TRY AGAIN" << endl;
	}
}

const size_t* Water::getSize() const
{
	return &sizeWater; // adress
}

void Water::setLong(size_t longs) const
{
	if (longs >= 1 && longs <= 7)
	{
		longs = longWater;
	}
	else {
		cout << "ERROR!!! TRY AGAIN" << endl;
	}
}

const size_t*  Water::getLong() const
{
	return &longWater;
}



// request
Water::Water(const char* name)
{
	setName(name);
}

Water::Water(Reservoirs res)
{
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
