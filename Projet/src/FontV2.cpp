/*!
 * \file FontV2.cpp
 * \brief Class FontV2
 * \author Kevin XU & Ziheng LI
 * \date 5 Janvier 2018
 */
 
#include <iostream>
#include <cmath>
#include "FontV2.h"

void FontV2::colorInBlack(int x, int y) {
    if ((x <= 100 || x >= 400) || (y <= 100 || y >= 400)) {
        return;
    }
    unsigned int* color = img_.getPixelColor(Point(x,y));
    if (color[0] == 255 && color[1] == 255 && color[2] == 255) {
        std::cout << "true" << std::endl;
        img_.draw(Point(x, y, 0, 0, 0));

        colorInBlack(x+1, y);
        colorInBlack(x-1, y);
        colorInBlack(x, y+1);
        colorInBlack(x, y-1);
    }
}

void FontV2::B() {
    FontV1::B();
    colorInBlack(250, 160);
}

void FontV2::C() {
    FontV1::C();
    colorInBlack(250, 160);
}

void FontV2::D() {
    FontV1::D();
    colorInBlack(250, 160);
  //   BezierCurve curve2D;

  //   for (int i = 0; i <= thickness_; i++) {
		// curve2D.clearPoints();
	 //    curve2D.addPoint(Point(200+i, 150+i));
	 //    curve2D.addPoint(Point(200+i, 350-i));
  //       letter_.push_back(curve2D);

	 //    curve2D.clearPoints();
	 //    curve2D.addPoint(Point(200 +i, 150 +i));
	 //    curve2D.addPoint(Point(350 -i, 150 +i));
	 //    curve2D.addPoint(Point(350 -i, 250));
  //       letter_.push_back(curve2D);

	 //    curve2D.clearPoints();
	 //    curve2D.addPoint(Point(350-i, 250));
	 //    curve2D.addPoint(Point(350-i, 350-i));
	 //    curve2D.addPoint(Point(200+i, 350-i));
  //       letter_.push_back(curve2D);
  //   }
  //   return letter_;
}

void FontV2::E() {
    FontV1::E();
    colorInBlack(250, 160);
}

void FontV2::F() {
    FontV1::F();
    colorInBlack(250, 160);
}

void FontV2::O() {
    FontV1::O();
    colorInBlack(250, 160);
}

void FontV2::S() {
    FontV1::S();
    colorInBlack(250, 160);
}

void FontV2::Z() {
    FontV1::Z();
    colorInBlack(250, 160);
}