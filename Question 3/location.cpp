#include"location.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q3 - location swap implementation

/*Swap function for pointers*/
void Swap(Location* l1, Location* l2) {
	Location temp = *l1;  /*First we create temp variable and assign it the copy of l1*/ 
	*l1 = *l2;            /*Now we assign the l2 value to the l1 variable*/
	*l2 = temp;           /*Again we assign the l2 variable the temp value of original l1*/
}

/*Swap function for reference*/
void Swap(Location& l1, Location& l2) {
	Location temp = l1;  /*Same as the above function */
	l1 = l2;
	l2 = temp;
}