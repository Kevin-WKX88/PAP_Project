/*!
 * \file Point.cpp
 * \brief Class Point Implementation
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#include <iostream>
#include "Point.h"
#include <cmath>

Point::Point() : x_(0), y_(0) {

}

Point::Point(int x, int y) : x_(x), y_(y) {

}

Point::Point(const Point &P) : x_(P.x_), y_(P.y_) {

}

int Point::getX() const {
	return x_;
}

int Point::getY() const {
	return y_;
}

void Point::setX(int x) {
	x_ = x;
}

void Point::setY(int y) {
	y_ = y;
}

std::ostream & operator <<(std::ostream & out, const Point & P) {
	out << "(" << P.getX() << ", " << P.getY() << ")";
	return out;
}

double Point::dist(Point P, int n) {
	return pow(pow(x_ - P.getX(), n) + pow(y_ - P.getY(), n), 1/n);
}
