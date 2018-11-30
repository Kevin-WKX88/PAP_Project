/*!
 * \file Point.cpp
 * \brief Class Point Implementation
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#include "Point.h"
#include <iostream>

Point::Point() : x_(0), y_(0) {

}

Point::Point(int x, int y) : x_(x), y_(y) {

}

Point::Point(const Point &P) : x_(P.get_x()), y_(P.get_y()) {

}

int Point::get_x() const {
	return x_;
}

int Point::get_y() const {
	return y_;
}

void Point::set_x(int x) {
	x_ = x;
}

void Point::set_y(int y) {
	y_ = y;
}

std::ostream & operator <<(std::ostream & out, const Point & P) {
	out << "P = (" << P.get_x() << ", " << P.get_y() << ")";
	return out;
}
