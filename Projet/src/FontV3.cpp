/*!
 * \file FontV3.cpp
 * \brief Class FontV3
 * \author Kevin XU & Ziheng LI
 * \date 8 Janvier 2018
 */
 
#include "FontV3.h"

#include <iostream>

void FontV3::addRedContour() {
	for (int x = 100; x < 400; x++) {
		for (int y = 100; y < 400; y++) {
			unsigned int* color = img_.getPixelColor(Point(x, y));
		    if (color[0] == 0 && color[1] == 0 && color[2] == 0) {
				unsigned int* color1 = img_.getPixelColor(Point(x-1, y));
				unsigned int* color2 = img_.getPixelColor(Point(x+1, y));
				unsigned int* color3 = img_.getPixelColor(Point(x, y-1));
				unsigned int* color4 = img_.getPixelColor(Point(x, y+1));

		    	if ((color1[0] == 255 && color1[1] == 255 && color1[2] == 255) || (color1[0] == 255 && color1[1] == 0 && color1[2] == 0)) {
		        	img_.draw(Point(x-1, y, 255, 0, 0));
			    	img_.draw(Point(x-2, y, 255, 0, 0));
		    	}
		    	if ((color2[0] == 255 && color2[1] == 255 && color2[2] == 255) || (color2[0] == 255 && color2[1] == 0 && color2[2] == 0)) {
		    		img_.draw(Point(x+1, y, 255, 0, 0));
			    	img_.draw(Point(x+2, y, 255, 0, 0));
		    	}
		    	if ((color3[0] == 255 && color3[1] == 255 && color3[2] == 255) || (color3[0] == 255 && color3[1] == 0 && color3[2] == 0)) {
		    		img_.draw(Point(x, y-1, 255, 0, 0));
			    	img_.draw(Point(x, y-2, 255, 0, 0));
		    	}
		    	if ((color4[0] == 255 && color4[1] == 255 && color4[2] == 255) || (color4[0] == 255 && color4[1] == 0 && color4[2] == 0)) {
		    		img_.draw(Point(x, y+1, 255, 0, 0));
			    	img_.draw(Point(x, y+2, 255, 0, 0));
		    	}
		    }
		}
	}
}

void FontV3::A() {
	FontV2::A();
	addRedContour();
}

void FontV3::B() {
	FontV2::B();
	addRedContour();
}

void FontV3::C() {
	FontV2::C();
	addRedContour();
}

void FontV3::D() {
	FontV2::D();
	addRedContour();
}

void FontV3::E() {
	FontV2::E();
	addRedContour();
}

void FontV3::F() {
	FontV2::F();
	addRedContour();
}

void FontV3::G() {
	FontV2::G();
	addRedContour();
}

void FontV3::H() {
	FontV2::H();
	addRedContour();
}

void FontV3::I() {
	FontV2::I();
	addRedContour();
}

void FontV3::J() {
	FontV2::J();
	addRedContour();
}

void FontV3::K() {
	FontV2::K();
	addRedContour();
}

void FontV3::L() {
	FontV2::L();
	addRedContour();
}

void FontV3::M() {
	FontV2::M();
	addRedContour();
}

void FontV3::N() {
	FontV2::N();
	addRedContour();
}

void FontV3::O() {
	FontV2::O();
	addRedContour();
}
void FontV3::P() {
	FontV2::P();
	addRedContour();
}

void FontV3::Q() {
	FontV2::Q();
	addRedContour();
}

void FontV3::R() {
	FontV2::R();
	addRedContour();
}

void FontV3::S() {
	FontV2::S();
	addRedContour();
}

void FontV3::T() {
	FontV2::T();
	addRedContour();
}

void FontV3::U() {
	FontV2::U();
	addRedContour();
}

void FontV3::V() {
	FontV2::V();
	addRedContour();
}

void FontV3::W() {
	FontV2::W();
	addRedContour();
}

void FontV3::X() {
	FontV2::X();
	addRedContour();
}

void FontV3::Y() {
	FontV2::Y();
	addRedContour();
}

void FontV3::Z() {
	FontV2::Z();
	addRedContour();
}