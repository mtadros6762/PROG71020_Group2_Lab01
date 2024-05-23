#include <iostream>
#include"Location.h"
//prog71020 - madisont, adilf, armaanm - group2 - lab01, q3 - source code

//Use the function overloading to write a function called swap that
//swaps two Location structs
//a. Use pointers
//b. Use references
//c. Test your functions using the main function code. Do not change the
//provided main function

using namespace std;

int main() {

	// ** Question-3 **

	cout << "\nQuestion-3:" << endl;
	
	Location location1;
	location1.latitude = 25;
	location1.longitude = 40;

	Location location2;
	location2.latitude = 50;
	location2.longitude = 80;

	cout << "Before using the pointer swap function: location1   =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;
	Swap(&location1, &location2);
	cout << "After using the pointer swap function: location1    =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	cout << "Before using the reference swap function: location1 =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;
	Swap(location1, location2);
	cout << "After using the reference swap function: location1  =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	return 0;
}
