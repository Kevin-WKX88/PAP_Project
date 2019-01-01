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
	color_ = new unsigned int[3];
	color_[0] = 0;
	color_[1] = 0;
	color_[2] = 0;
}

Point::Point(int x, int y, unsigned int R, unsigned int G, unsigned int B) : x_(x), y_(y) {
	color_ = new unsigned int[3];
	color_[0] = R;
	color_[1] = G;
	color_[2] = B;
}

Point::Point(const Point &P) : x_(P.x_), y_(P.y_) {
	color_ = new unsigned int[3];
	color_[0] = P.color_[0];
	color_[1] = P.color_[1];
	color_[2] = P.color_[2];
}

/// Define the default destructor for a matrix
Point::~Point() {
	if (color_) {
		delete[] color_;
	}
}

// int Point::getX() const {
// 	return x_;
// }

// int Point::getY() const {
// 	return y_;
// }

void Point::setX(int x) {
	x_ = x;
}

void Point::setY(int y) {
	y_ = y;
}

// unsigned int* Point::getColor() {
// 	return color_;
// }


std::ostream & operator <<(std::ostream & out, const Point & P) {
	out << "(" << P.getX() << ", " << P.getY() << ")";
	return out;
}

double Point::dist(Point P) {
	return sqrt(pow(x_ - P.getX(), 2) + pow(y_ - P.getY(), 2));
}
