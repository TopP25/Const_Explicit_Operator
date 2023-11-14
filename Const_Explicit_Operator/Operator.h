#pragma once
#include "Explicit.h"

class Point {

	double x;
	double y;

public:

	Point(double x, double y) : x{ x }, y{ y } {}

	Point() : Point(0, 0){}

	void display() const {
		cout << "(" << x << ", " << y << ")";
	}

	void read() {
		cin >> x;
		cin.ignore(1);
		cin >> y;
	}

	static bool isEqual(const Point& point1, const Point& point2) {
		return point1.x == point2.x and point1.y == point2.y;
	}
	static Point add(const Point& point1, const Point& point2) {
		return Point(point1.x + point2.x, point1.y + point2.y);
	}
	static Point mult(const Point& point1, const Point& point2) {
		return Point(point1.x * point2.x, point1.y * point2.y);
	}
	static double distance(const Point& point1, const Point& point2) {
		return sqrt((point1.x - point2.x) * (point1.x - point2.x)
			+ (point1.y - point2.y) * (point1.y - point2.y));
	}
	
	friend bool operator==(const Point& point1, const Point& point2) {
		return isEqual(point1, point2);
	}
	friend Point operator+(const Point& point1, const Point& point2) {
		return add(point1, point2);
	}
	void operator+=(int i) {
		x += i;
		y += i;
	}
	Point operator+(int i) {
		return Point(x+i, y+i);
	}

	friend Point operator*(const Point& point1, const Point& point2) {
		return mult(point1, point2);
	}
	friend double operator^(const Point& point1, const Point& point2) {
		return distance(point1, point2);
	}

	friend ostream& operator << (ostream & output, const Point point) {
		output << "(" << point.x << ", " << point.y << ")";
		return output;
	}
	ostream& operator << (ostream& output) {
		output << "(" << x << ", " << y << ")";
		return output;
	}
	/*friend istream& operator>> (istream& input, const Point& point) {
		input >> point.x;
		input.ignore(1);
		input >> point.y;
		return input;
	}*/
};