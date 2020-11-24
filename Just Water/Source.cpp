#include <iostream>
#include <string>
#include "Water.h"

using namespace std;

int main()
{
	Water w("Ustya");
	w.setName("Ustya");
	w.setSize(4000);
	w.setLong(68000);
	w.setDepth(60);
	w.print();
	

	return 0;
}
