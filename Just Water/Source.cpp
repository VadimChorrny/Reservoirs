#include <iostream>
#include <string>
#include "Water.h"

using namespace std;

int main()
{
	Water w("Ustya");
	w.setName("Ustya");
	w.setSize(599);
	w.setLong(49);
	w.setDepth(1000);
	w.setTypeReservoirs(Water::Reservoirs::LAKE);
	w.getQtyWater();
	w.print();
	

	return 0;
}
