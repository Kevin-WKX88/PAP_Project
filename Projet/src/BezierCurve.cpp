/*!
 * \file BezierCurve.cpp
 * \brief Class BezierCurve Implementation
 * \date 30 Décembre
 */
 
#include <iostream>
#include "Point.h"
#include "BezierCurve.h"
#include <cmath>

BezierCurve::BezierCurve(){}

Point BezierCurve::twoPoints(Point P1, Point P2, float x){
	Point p;
	int X = abs(P1.getX() - P2.getX()) * x + P1.getX();
	int Y = abs(P1.getY() - P2.getY()) * x + P1.getY();
	p.setX(X);
	p.setY(Y);
	return p;
}