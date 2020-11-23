#include <iostream>
#include <string>
#include "Water.h"

using namespace std;

int main()
{
	Water w("Boloto"); // get name
	Water b(Water::Reservoirs::LAKE); // get reservoirs
	w.print(); // print

	return 0;
}