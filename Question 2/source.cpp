#include <iostream>
#define ARRAY_LENGTH 5

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q2 - source code

//Write a void function called swap that swaps two int variables passed to it.
//a. Use pointers
//b. Use references
//c. Test your functions using the main function code. Do not change the
//provided main function

using namespace std;

int main() {

	// ** Question-2 **

	cout << "\nQuestion-2:" << endl;

	int num1 = 12;
	int num2 = 51;

	cout << "Before using the pointer swap function   " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	swap(&num1, &num2);
	cout << "After using the pointer swap function    " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << endl;

	cout << "Before using the reference swap function " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	swap(num1, num2);
	cout << "After using the reference swap function  " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << endl;

	return 0;
}
