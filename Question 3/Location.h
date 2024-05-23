#pragma once

//prog71020 - madisont, adilf, armaanm - group2 - lab01, q3 - location swap interface

#ifndef LOCATION_CLASS_H
#define LOCATION_CLASS_H

//LIBRARIES
#include <iostream>

//STRUCT
struct Location {
	int longitude;
	int latitude;
};

//FUNCTIONS
void Swap(Location* l1, Location* l2);

void Swap(Location& l1, Location& l2);

#endif //LOCATION_CLASS_H