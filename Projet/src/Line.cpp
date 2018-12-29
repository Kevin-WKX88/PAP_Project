/*!
 * \file Line.cpp
 * \brief Class Line Implementation
 * \author Kevin XU
 * \date 29 December 2018
 */

#include <iostream>
#include "Line.h"

Line::Line(Point P1, Point P2, unsigned int R, unsigned int G, unsigned int B, int thickness) : P1_(P1), P2_(P2), thickness_(thickness) {
	color_ = new unsigned int[3];
	color_[0] = R;
	color_[1] = G;
	color_[2] = B;
}

Point Line::getP1() const {
	return P1_;
}
Point Line::getP2() const {
	return P2_;
}

void Line::setP1(Point P1) {
	P1_ = P1;
}

void Line::setP2(Point P2) {
	P2_ = P2;
}

void Line::setThickness(int thickness) {
	thickness_ = thickness;
}

void Line::setColor(unsigned int R, unsigned int G, unsigned int B) {
	color_[0] = R;
	color_[1] = G;
	color_[2] = B;
}

std::ostream & operator <<(std::ostream & out, const Line & L) {
	out << "Line : P1 = " << L.getP1() << " P2 = " << L.getP2();
	return out;
}









