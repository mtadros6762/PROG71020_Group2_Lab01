#include "multiply.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q4 - source code

//Write a function called multiply that has three int arguments
//multiply(int, int, int). The last argument should have a default
//value = 1. The function returns the product of the three numbers.
//a. Add another function that has the same name and has only two 
//arguments multiply(double, double)
//b. Can you add another third function that has the same name and
//has two arguments: multiply(int, int) and call it as follows
//multiply(2, 3)? Why or why not?
//Answer:
//You cannot add a function like this because it would be contradictory. Function overloading only works when there is
//no ambiguity between which function needs to work. In the older multiply function, if it was called like
//this multiply(2, 3), then it wouldnt know if they should add the default value 1 of c or not. So, it violates the rules
//of function overloading, therefore, its not possible.
//c. Test your functions using the main function code. Do not change the
//provided main function

using namespace std;

int main() {

	// ** Question-4 **

	cout << "Question-4: \n";

	cout << "The product of 4 * 15 * 7 is " << multiply(4, 15, 7) << endl;

	cout << "The product of 0.5 * 4.5  is " << multiply(0.5, 4.5) << endl;

	return 0;
}