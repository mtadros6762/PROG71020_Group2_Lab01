#pragma once

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q1 - max class interface

#ifndef MAX_CLASS_H
#define MAX_CLASS_H

//LIBRARIES AND MACROS
#include <iostream>
#define ARRAY_LENGTH 5

class maxClass {
	//Data
	int a;
	int b;
	int c;
	int arrayOne[ARRAY_LENGTH];
	int arrayTwo[ARRAY_LENGTH];

public:
	//Constructors
	//maxClass();


	//Functions
	int max(int a, int b);
	int max(int a, int b, int c);
	//int max(int arrayOne[], int);

};

#endif //MAX_CLASS_H