#include "max.h"

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q1 - max implementation

//Function to find the max of two ints
int max(int a, int b) {

	int max = a;
	
	//Comparing values to find max
	if (b > max) {
		max = a;
	}
	return max;
}

//Function to find the max of three ints
int max(int a, int b, int c) {

	int max = a;

	//Comparing values to find max
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}

//Function to find the max element in an array
int max(int array[]) {

	int max = array[0];
	int length = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < length; i++) {
		//Compare elements of array with the max
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}

//Function to find the max element in two arrays
int max(int arrayOne[], int arrayTwo[]) {

	int maxNum = max(arrayOne);	//Set maxNum to the max of the first array
	int twoMax = max(arrayTwo);	//Find max of the second array

	//Compare the max numbers of the two arrays
	if (twoMax > maxNum) {
		maxNum = twoMax;
	}
	return maxNum;
}