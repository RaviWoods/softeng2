#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class point {
public:	
	point() : x(0), y(0), r(0) {}
	point(double x_in, double y_in) : x(x_in), y(y_in) {
		set_r();
	}
	void set_x(double x_in);
	void set_y(double y_in);
	void set_r();

	double get_x();
	double get_y();
	double get_r();

	string print();
	double twopointdist(point p2);
	void sym();
	void translate(point p2);
	
private:
	double x;
	double y;
	double r;
};

void point::set_x(double x_in) {
	x = x_in;
	set_r();

}

void point::set_y(double y_in) {
	y = y_in;
	set_r();
}


void point::set_r() {
	r = sqrt(pow(x,2) + pow(y,2));
}

double point::get_x() { return x; }
double point::get_y() { return y; }
double point::get_r() { return r; }

string point::print() {
	stringstream ss;
	ss << "(" << x << "," << y << ") and r = " << r;
	return ss.str();
}

double point::twopointdist(point p2) {
	return sqrt( pow((x-p2.get_x()),2) + pow((y-p2.get_y()),2) ) ;
}

void point::sym() {
	set_x(-x);
	set_y(-y);
}

void point::translate(point p2) {
	set_x(x + p2.get_x());
	set_y(y + p2.get_y());
}

int main() {
	cout << "-------------------" << endl;
	point p1(1,1);
	point p2(-1,-1);
	p1.translate(p2);
	cout << p1.print() << endl;	
	return 0;
}