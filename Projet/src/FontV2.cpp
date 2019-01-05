/*!
 * \file FontV2.cpp
 * \brief Class FontV2
 * \author Kevin XU & Ziheng LI
 * \date 5 Janvier 2018
 */
 
#include <iostream>
#include <cmath>
#include "FontV2.h"

/**
 * @brief The curves to draw the letter D
 * @return letter_
 */
std::vector<BezierCurve> FontV2::D() {
    BezierCurve curve2D;

    for (int i = 0; i <= thickness_; i++) {
		curve2D.clearPoints();
	    curve2D.addPoint(Point(200+i, 150+i));
	    curve2D.addPoint(Point(200+i, 350-i));
        letter_.push_back(curve2D);

	    curve2D.clearPoints();
	    curve2D.addPoint(Point(200 +i, 150 +i));
	    curve2D.addPoint(Point(350 -i, 150 +i));
	    curve2D.addPoint(Point(350 -i, 250));
        letter_.push_back(curve2D);

	    curve2D.clearPoints();
	    curve2D.addPoint(Point(350-i, 250));
	    curve2D.addPoint(Point(350-i, 350-i));
	    curve2D.addPoint(Point(200+i, 350-i));
        letter_.push_back(curve2D);
    }
    return letter_;
}