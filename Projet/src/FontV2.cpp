/*!
 * \file FontV2.cpp
 * \brief Class FontV2
 * \author Kevin XU & Ziheng LI
 * \date 5 Janvier 2018
 */
 
#include "FontV2.h"

void FontV2::colorInBlack(int x, int y) {
    if ((x <= 100 || x >= 400) || (y <= 100 || y >= 400)) {
        return;
    }
    unsigned int* color = img_.getPixelColor(Point(x, y));
    if (color[0] == 255 && color[1] == 255 && color[2] == 255) {
        img_.draw(Point(x, y, 0, 0, 0));
        colorInBlack(x+1, y);
        colorInBlack(x-1, y);
        colorInBlack(x, y+1);
        colorInBlack(x, y-1);
    }
}

void FontV2::A() {
    FontV1::A();
    colorInBlack(250, 240);
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
}

void FontV2::E() {
    FontV1::E();
    colorInBlack(250, 250);
}

void FontV2::F() {
    FontV1::F();
    colorInBlack(250, 250);
}

void FontV2::G() {
    FontV1::G();
    colorInBlack(250, 160);
}

void FontV2::H() {
    FontV1::H();
    colorInBlack(250, 230);
}

void FontV2::I() {
    FontV1::I();
    colorInBlack(250, 250);
}

void FontV2::J() {
    FontV1::J();
    colorInBlack(290, 250);
}

void FontV2::K() {
    FontV1::K();
    colorInBlack(210, 250);
}

void FontV2::L() {
    FontV1::L();
    colorInBlack(210, 250);
}

void FontV2::M() {
    FontV1::M();
    colorInBlack(250, 235);
}

void FontV2::N() {
    FontV1::N();
    colorInBlack(250, 250);
}

void FontV2::O() {
    FontV1::O();
    colorInBlack(250, 160);
}

void FontV2::P() {
    FontV1::P();
    colorInBlack(210, 250);
}

void FontV2::Q() {
    FontV1::Q();
    colorInBlack(250, 160);
}

void FontV2::R() {
    FontV1::R();
    colorInBlack(210, 250);
}

void FontV2::S() {
    FontV1::S();
    colorInBlack(280, 310);
}

void FontV2::T() {
    FontV1::T();
    colorInBlack(250, 250);
}

void FontV2::U() {
    FontV1::U();
    colorInBlack(250, 160);
}

void FontV2::V() {
    FontV1::V();
    colorInBlack(250, 160);
}

void FontV2::W() {
    FontV1::W();
    colorInBlack(250, 340);
}

void FontV2::X() {
    FontV1::X();
    colorInBlack(250, 250);
}

void FontV2::Y() {
    FontV1::Y();
    colorInBlack(250, 250);
}

void FontV2::Z() {
    FontV1::Z();
    colorInBlack(250, 160);
}