#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "tri.hpp"

using namespace std;

double triangle::perimeter() {
	double l1 = p1.twopointdist(p2);
	double l2 = p2.twopointdist(p3);
	double l3 = p3.twopointdist(p1);
	return (l1 + l2 + l3);	
}

void triangle::translate(point vect) {
	p1.translate(vect);
	p2.translate(vect);
	p3.translate(vect);
}

string triangle::print() {
	stringstream ss;
	ss << "p1: " << p1.print() << endl;
	ss << "p2: " << p2.print() << endl;
	ss << "p3: " << p3.print() << endl;
	return ss.str();
}
