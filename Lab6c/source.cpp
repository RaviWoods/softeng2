#include "../libs.h"
#include "tri.hpp"
#include "point.hpp"
#include "poly.hpp"

using namespace std;

int main() {
	Triangle tri1 = Triangle(Point(0,0),Point(0,1), Point(1,0));
	cout << "Perimeter = " << tri1.perimeter() << endl;
	cout << tri1 << endl;
}
