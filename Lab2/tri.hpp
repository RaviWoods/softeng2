#ifndef TRI_HPP
#define TRI_HPP
#include "point.hpp"

class triangle {
public:
	triangle(point p1_in, point p2_in, point p3_in) : p1(p1_in), p2(p2_in) , p3(p3_in) {}

	double perimeter();
	std::string print();
	void translate(point vect);

private:
	point p1;
	point p2;
	point p3;
};

#endif
