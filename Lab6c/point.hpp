#ifndef POINT_HPP
#define POINT_HPP
#include "../libs.h"

class Point {
public:	
	Point() : x(0), y(0), r(0) {}
	Point(double x_in, double y_in) : x(x_in), y(y_in) {
		set_r();
	}
	/*
	~Point() {
		std::cout << "deleting " << *this << std::endl;
	}
	*/
	void set_x(double x_in);
	void set_y(double y_in);
	void set_r();

	double get_x() const;
	double get_y() const;
	double get_r() const;

	friend bool operator <(const Point& p1, const Point& p2);
	friend bool operator ==(const Point& p1, const Point& p2);
	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
	friend std::istream& operator>>(std::istream& is, Point& pt);
	std::string print();
	double twopointdist(Point p2);
	void sym();
	void translate(Point p2);
	
private:
	double x;
	double y;
	double r;
};

#endif
