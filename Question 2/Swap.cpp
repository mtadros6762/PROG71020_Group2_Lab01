#include"swap.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q2 - swap implementation

/*Swapping function for pointers*/
void Swap(int* n1, int* n2) {
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;


}

/*Swapping function for reference*/
void Swap(int& n1, int& n2) {

	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}