#include "max.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q1 - source code

//Write a function called max that returns the max of two int numbers. Then,
//create a series of overloaded functions with the same name that can:
//a. Return the max of three int numbers
//b. Return the max of an array of int[5]
//c. Return the max of two arrays: int a[5], int b[5]
//d. Test your functions using the main function code. Do not change the
//provided main function.

using namespace std;

int main() {

	// ** Question-1 **
	cout << "Question-1:" << endl;

	cout << "The max of 9 and 7 is " << max(9, 7) << endl;

	cout << "The max of 9, 15, and 71 is " << max(9, 15, 71) << endl;

	int arrayOne[ARRAY_LENGTH] = { 10,2,30,4,51 };
	cout << "The max of the array {10, 2, 30, 4, 51} is " << max(arrayOne) << endl;

	int arrayTwo[ARRAY_LENGTH] = { 8,70,16,15,41 };
	cout << "The max of the two given arrays is " << max(arrayOne, arrayTwo) << endl;

	return 0;
}
