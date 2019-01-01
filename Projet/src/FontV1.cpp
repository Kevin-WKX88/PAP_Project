/*!
 * \file FontV1.cpp
 * \brief Class FontV1
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
#include <iostream>
#include <cmath>
#include "FontV1.h"

FontV1::FontV1(std::vector<BezierCurve> letter) {
	letter_ = letter;
}

void FontV1::addCurve(BezierCurve C) {
	letter_.push_back(C);
}


std::vector<BezierCurve> FontV1::F1D(int thickness){
    BezierCurve curve1D;

    curve1D.addPoint(Point(2000, 1500));
    curve1D.addPoint(Point(2000, 3500));
    letter_.push_back(curve1D);

    curve1D.clearPoints();
    curve1D.addPoint(Point(2000+thickness, 1500+thickness));
    curve1D.addPoint(Point(2000+thickness, 3500-thickness));
    letter_.push_back(curve1D);

    curve1D.clearPoints();
    curve1D.addPoint(Point(2000, 1500));
    curve1D.addPoint(Point(3500, 1500));
    curve1D.addPoint(Point(3500, 2500));
    letter_.push_back(curve1D);

    curve1D.clearPoints();
    curve1D.addPoint(Point(3500, 2500));
    curve1D.addPoint(Point(3500, 3500));
    curve1D.addPoint(Point(2000, 3500));
    letter_.push_back(curve1D);

    curve1D.clearPoints();
    curve1D.addPoint(Point(2000+thickness, 1500+thickness));
    curve1D.addPoint(Point(3500-thickness, 1500+thickness));
    curve1D.addPoint(Point(3500-thickness, 2500));
    letter_.push_back(curve1D);

    curve1D.clearPoints();
    curve1D.addPoint(Point(3500-thickness, 2500));
    curve1D.addPoint(Point(3500-thickness, 3500-thickness));
    curve1D.addPoint(Point(2000+thickness, 3500-thickness));
    letter_.push_back(curve1D);

    return letter_;
}

std::vector<BezierCurve> FontV1::Z(double size, int thickness){
    BezierCurve curve1Z;

    // Bas
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 1500*size));
    curve1Z.addPoint(Point(3100*size, 1500*size));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size+thickness, 1500*size+thickness));
    curve1Z.addPoint(Point(3100*size, 1500*size+thickness));
    letter_.push_back(curve1Z);

    // Haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 3500*size));
    curve1Z.addPoint(Point(3100*size, 3500*size));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 3500*size-thickness));
    curve1Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
    letter_.push_back(curve1Z);

    // Diagonale
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size+thickness, 1500*size+thickness));
    curve1Z.addPoint(Point(3100*size, 3500*size-thickness));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 1500*size+thickness));
    curve1Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
    letter_.push_back(curve1Z);

    // Bord haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 3500*size));
    curve1Z.addPoint(Point(1900*size, 3500*size-thickness));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(3100*size, 3500*size));
    curve1Z.addPoint(Point(3100*size, 3500*size-thickness));
    letter_.push_back(curve1Z);

    // Bord bas
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(1900*size, 1500*size));
    curve1Z.addPoint(Point(1900*size, 1500*size+thickness));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(3100*size, 1500*size));
    curve1Z.addPoint(Point(3100*size, 1500*size+thickness));
    letter_.push_back(curve1Z);

    return letter_;
}































