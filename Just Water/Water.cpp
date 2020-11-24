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

void Water::setSize(const size_t& sizeWater)
{
	this->sizeWater = sizeWater;
}

void Water::setLong(const size_t& longWater)
{
	this->longWater = longWater;
}

void Water::setDepth(const size_t& maxDepth)
{
	this->maxDepth = maxDepth;
}

void Water::setTypeReservoirs(const Reservoirs& type)
{
	this->type = type;
}

const size_t Water::getSize() const
{
	return sizeWater;
}

const size_t Water::getLong() const
{
	return longWater;
}

const size_t Water::getDepth() const
{
	return maxDepth;
}

size_t Water::getQtyWater()
{
	return countWater;
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
	cout << "Name: " << name << endl;
	cout << "Type Water: " << getQtyWater() << endl;
	cout << "Size: " << sizeWater << endl;
	cout << "Long: " << longWater << endl;
	cout << "MaxDepth: " << maxDepth << endl;
	cout << "Count Water Areas: " << countWater << endl;
	
}