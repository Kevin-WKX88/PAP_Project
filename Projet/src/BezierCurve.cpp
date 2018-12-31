/*!
 * \file BezierCurve.cpp
 * \brief Class BezierCurve Implementation
 * \author Kevin XU
 * \date 30 Décembre 2018
 */

#include <iostream>
#include <cmath>

#include "BezierCurve.h"


BezierCurve::BezierCurve(std::vector<Point> points) {
	points_ = points;
}


void BezierCurve::addPoint(Point P) {
	points_.push_back(P);
}

void BezierCurve::clearPoints() {
	points_.clear();
}


Point BezierCurve::getCasteljauPoint(int c, int index, double t) {
	if (c == 0) {
		return points_[index];
	}
	Point P1 = getCasteljauPoint(c-1, index, t);
	Point P2 = getCasteljauPoint(c-1, index+1, t);
	return Point(round((1-t) * P1.getX() + t * P2.getX()), round((1-t) * P1.getY() + t * P2.getY()));
}

std::vector<Point> BezierCurve::getCurvePoints() {
	std::vector<Point> res;
	for (double t = 0.0; t <= 1; t += precision_) {
		res.push_back(getCasteljauPoint(points_.size()-1, 0, t));
	}
	return res;
}
