#include "max.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q1 - max class implementation

using namespace std;

//Constructors

//Function to find the max of two ints
int maxClass::max(int a, int b) {

	int max = 0;

	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}

	return max;
}

//Function to find the max of three ints
int maxClass::max(int a, int b, int c) {

	int max = 0;

	//Comparing values to find max
	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else if (c > a && c > b) {
		max = c;
	}

	return max;
}

//int maxClass::max(int arrayOne[], int sizeofarray) {
//
//	int max = 0;
//
//
//
//	return max;
//}

//maxClass::ostream& operator<<(maxClass::ostream& os, const maxClass& t) {
//	os << t.direction << '/' << t.loading_time << '/' << t.crossing_time;
//	return os;
//}