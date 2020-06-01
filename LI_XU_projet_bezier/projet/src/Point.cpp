/*!
 * \file Point.cpp
 * \brief Class Point Implementation
 * \author Kevin XU & Ziheng LI
 * \date 30 Novembre 2018
 */

#include "Point.h"

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

Point::~Point() {
	if (color_) {
		delete[] color_;
	}
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