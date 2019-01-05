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

std::vector<BezierCurve> FontV1::A(){
    BezierCurve curve1A;

    // haut
    curve1A.addPoint(Point(240, 350));
    curve1A.addPoint(Point(240+thickness_, 350));
    letter_.push_back(curve1A);

    // gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(240, 350));
    curve1A.addPoint(Point(150, 150));
    letter_.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(260, 350));
    curve1A.addPoint(Point(350, 150));
    letter_.push_back(curve1A);

    //bas gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(150, 150));
    curve1A.addPoint(Point(150+thickness_, 150));
    letter_.push_back(curve1A);

    //bas droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_, 150));
    curve1A.addPoint(Point(350, 150));
    letter_.push_back(curve1A);

    //bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(150+thickness_, 150));
    curve1A.addPoint(Point(200, 225));
    letter_.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_, 150));
    curve1A.addPoint(Point(300, 225));
    letter_.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(200, 225));
    curve1A.addPoint(Point(300, 225));
    letter_.push_back(curve1A);

    // small
    // gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(200+0.5*thickness_, 225+thickness_));
    letter_.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_, 225+thickness_));
    letter_.push_back(curve1A);

    // bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(200+0.5*thickness_, 225+thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_, 225+thickness_));
    letter_.push_back(curve1A);

    return letter_;
}













std::vector<BezierCurve> FontV1::B(){
    BezierCurve curve1B;
    
    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150, 350));
    curve1B.addPoint(Point(150, 150));
    letter_.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350));
    curve1B.addPoint(Point(150, 350));
    letter_.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 150));
    curve1B.addPoint(Point(150, 150));
    letter_.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350));
    curve1B.addPoint(Point(300, 350));
    curve1B.addPoint(Point(300, 300));
    letter_.push_back(curve1B);

    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250));
    curve1B.addPoint(Point(300, 250));
    curve1B.addPoint(Point(300, 300));
    letter_.push_back(curve1B);

    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250));
    curve1B.addPoint(Point(300, 250));
    curve1B.addPoint(Point(300, 200));
    letter_.push_back(curve1B);

    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 150));
    curve1B.addPoint(Point(300, 150));
    curve1B.addPoint(Point(300, 200));
    letter_.push_back(curve1B);

    // small 
    // small haut
    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 350-thickness_));
    curve1B.addPoint(Point(150+thickness_, 250+0.5*thickness_));
    letter_.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350-thickness_));
    curve1B.addPoint(Point(150+thickness_, 350-thickness_));
    letter_.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250+0.5*thickness_));
    curve1B.addPoint(Point(150+thickness_, 250+0.5*thickness_));
    letter_.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350-thickness_));
    curve1B.addPoint(Point(300-thickness_, 350-thickness_));
    curve1B.addPoint(Point(300-thickness_, 300));
    letter_.push_back(curve1B);


    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(300-thickness_, 300));
    curve1B.addPoint(Point(300-thickness_, 250+thickness_));
    curve1B.addPoint(Point(250, 250+0.5*thickness_));
    letter_.push_back(curve1B);

    // small bas
    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 150+thickness_));
    curve1B.addPoint(Point(150+thickness_, 250-0.5*thickness_));
    letter_.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250-0.5*thickness_));
    curve1B.addPoint(Point(150+thickness_, 250-0.5*thickness_));
    letter_.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 150+thickness_));
    curve1B.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250-0.5*thickness_));
    curve1B.addPoint(Point(300-thickness_, 250-thickness_));
    curve1B.addPoint(Point(300-thickness_, 200));
    letter_.push_back(curve1B);


    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(300-thickness_, 200));
    curve1B.addPoint(Point(300-thickness_, 150+thickness_));
    curve1B.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1B);




    return letter_;
}

std::vector<BezierCurve> FontV1::C() {
    BezierCurve curve1C;
    // haut petit trait
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320));
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    letter_.push_back(curve1C);
    
    // haut droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320));
    curve1C.addPoint(Point(300, 350));
    curve1C.addPoint(Point(250, 350));
    letter_.push_back(curve1C);

    // haut gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170, 250));
    curve1C.addPoint(Point(170, 350));
    curve1C.addPoint(Point(250, 350));
    letter_.push_back(curve1C);

    // bas gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170, 250));
    curve1C.addPoint(Point(170, 150));
    curve1C.addPoint(Point(250, 150));
    letter_.push_back(curve1C);

    // bas droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320-(320-250)*2));
    curve1C.addPoint(Point(300, 350-(350-250)*2));
    curve1C.addPoint(Point(250, 350-(350-250)*2));
    letter_.push_back(curve1C);

    // Small
    // haut droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curve1C.addPoint(Point(300-thickness_, 350-thickness_));
    curve1C.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1C);

    // // haut gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170+thickness_, 250));
    curve1C.addPoint(Point(170+thickness_, 350-thickness_));
    curve1C.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1C);

    // bas gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170+thickness_, 250));
    curve1C.addPoint(Point(170+thickness_, 150+thickness_));
    curve1C.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1C);

    // bas droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10-(320-thickness_+10-250)*2));
    curve1C.addPoint(Point(300-thickness_, 350-thickness_-(350-thickness_-250)*2));
    curve1C.addPoint(Point(250, 350-thickness_-(100-thickness_)*2));
    letter_.push_back(curve1C);

    // haut petit trait
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10-(320-thickness_+10-250)*2));
    curve1C.addPoint(Point(320, 320-(320-250)*2));
    letter_.push_back(curve1C);
    return letter_;
}

std::vector<BezierCurve> FontV1::D(){
    BezierCurve curve1D;

    // gauche
    curve1D.addPoint(Point(200, 150));
    curve1D.addPoint(Point(200, 350));
    letter_.push_back(curve1D);

    // bas droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(200, 150));
    curve1D.addPoint(Point(350, 150));
    curve1D.addPoint(Point(350, 250));
    letter_.push_back(curve1D);

    // haut droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(350, 250));
    curve1D.addPoint(Point(350, 350));
    curve1D.addPoint(Point(200, 350));
    letter_.push_back(curve1D);

    // small
    // gauche
    curve1D.clearPoints();
    curve1D.addPoint(Point(200+thickness_, 150+thickness_));
    curve1D.addPoint(Point(200+thickness_, 350-thickness_));
    letter_.push_back(curve1D);

    // bas droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(200+thickness_, 150+thickness_));
    curve1D.addPoint(Point(350-thickness_, 150+thickness_));
    curve1D.addPoint(Point(350-thickness_, 250));
    letter_.push_back(curve1D);

    // haut droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(350-thickness_, 250));
    curve1D.addPoint(Point(350-thickness_, 350-thickness_));
    curve1D.addPoint(Point(200+thickness_, 350-thickness_));
    letter_.push_back(curve1D);

    return letter_;
}


std::vector<BezierCurve> FontV1::G() {
    BezierCurve curve1G;
    // haut petit trait
    curve1G.clearPoints();
    curve1G.addPoint(Point(320, 320));
    curve1G.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    letter_.push_back(curve1G);

    // haut droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(320, 320));
    curve1G.addPoint(Point(300, 350));
    curve1G.addPoint(Point(250, 350));
    letter_.push_back(curve1G);

    // haut gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170, 250));
    curve1G.addPoint(Point(170, 350));
    curve1G.addPoint(Point(250, 350));
    letter_.push_back(curve1G);

    // bas gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170, 250));
    curve1G.addPoint(Point(170, 150));
    curve1G.addPoint(Point(250, 150));
    letter_.push_back(curve1G);

    // // bas droite // POUR COLORIER
    // curve1G.clearPoints();
    // curve1G.addPoint(Point(330, 250, 255));
    // curve1G.addPoint(Point(330, 150, 255));
    // curve1G.addPoint(Point(250, 150, 255));
    // letter_.push_back(curve1G);

    // bas droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 175));
    curve1G.addPoint(Point(330-thickness_-16, 150+1));
    curve1G.addPoint(Point(250, 150));
    letter_.push_back(curve1G);

    // trait droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 250));
    curve1G.addPoint(Point(330, 150));
    letter_.push_back(curve1G);

    // trait gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 175));
    curve1G.addPoint(Point(330-thickness_, 150));
    letter_.push_back(curve1G);

    // trait bas
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 150));
    curve1G.addPoint(Point(330-thickness_, 150));
    letter_.push_back(curve1G);

    // trait haut
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 250));
    curve1G.addPoint(Point(330-thickness_, 250));
    letter_.push_back(curve1G);

    // Small
    // haut droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curve1G.addPoint(Point(300-thickness_, 350-thickness_));
    curve1G.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1G);

    // // haut gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170+thickness_, 250));
    curve1G.addPoint(Point(170+thickness_, 350-thickness_));
    curve1G.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1G);

    // bas gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170+thickness_, 250));
    curve1G.addPoint(Point(170+thickness_, 150+thickness_));
    curve1G.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1G);

    // bas droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 250));
    curve1G.addPoint(Point(330-thickness_, 150+thickness_));
    curve1G.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1G);

    return letter_;
}


std::vector<BezierCurve> FontV1::O() {
    BezierCurve curve1O;

    // haut droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 350));
    curve1O.addPoint(Point(250, 350));
    letter_.push_back(curve1O);

    // haut gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 350));
    curve1O.addPoint(Point(250, 350));
    letter_.push_back(curve1O);

    // bas gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 150));
    curve1O.addPoint(Point(250, 150));
    letter_.push_back(curve1O);

    // bas droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 150));
    curve1O.addPoint(Point(250, 150));
    letter_.push_back(curve1O);


    // Small
    // haut droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1O);

    // haut gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    letter_.push_back(curve1O);

    // bas gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1O);

    // bas droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    letter_.push_back(curve1O);

    // for (int i = thickness_; i > 0; i--) {
    //     // haut droite
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(330-i, 250));
    //     curve1O.addPoint(Point(330-i, 350-i));
    //     curve1O.addPoint(Point(250, 350-i));
    //     letter_.push_back(curve1O);

    //     // haut gauche
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(170+i, 250));
    //     curve1O.addPoint(Point(170+i, 350-i));
    //     curve1O.addPoint(Point(250, 350-i));
    //     letter_.push_back(curve1O);

    //     // bas gauche
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(170+i, 250));
    //     curve1O.addPoint(Point(170+i, 150+i));
    //     curve1O.addPoint(Point(250, 150+i));
    //     letter_.push_back(curve1O);

    //     // bas droite
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(330-i, 250));
    //     curve1O.addPoint(Point(330-i, 150+i));
    //     curve1O.addPoint(Point(250, 150+i));
    //     letter_.push_back(curve1O);
    // }
    

    return letter_;
}


std::vector<BezierCurve> FontV1::S() {
    BezierCurve curve1S;

    // haut
    curve1S.addPoint(Point(210, 320));
    curve1S.addPoint(Point(220, 340));
    curve1S.addPoint(Point(255, 340));
    letter_.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(255, 340));
    curve1S.addPoint(Point(290, 340));
    curve1S.addPoint(Point(300, 320));
    letter_.push_back(curve1S);

    // gauche
    curve1S.clearPoints();
    curve1S.addPoint(Point(210, 320));
    curve1S.addPoint(Point(200, 300));
    curve1S.addPoint(Point(220, 290));
    letter_.push_back(curve1S);

    // middle
    curve1S.clearPoints();
    curve1S.addPoint(Point(220, 290));
    curve1S.addPoint(Point(235, 280));
    curve1S.addPoint(Point(255, 280));
    letter_.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(255, 280));
    curve1S.addPoint(Point(270, 280));
    curve1S.addPoint(Point(290, 270));
    letter_.push_back(curve1S);

    // droite
    curve1S.clearPoints();
    curve1S.addPoint(Point(290, 270));
    curve1S.addPoint(Point(310, 260));
    curve1S.addPoint(Point(300, 240));
    letter_.push_back(curve1S);

    // bas
    curve1S.clearPoints();
    curve1S.addPoint(Point(300, 240));
    curve1S.addPoint(Point(290, 220));
    curve1S.addPoint(Point(255, 220));
    letter_.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(210, 240));
    curve1S.addPoint(Point(220, 220));
    curve1S.addPoint(Point(255, 220));
    letter_.push_back(curve1S);

    // Small
    
    return letter_;
}


std::vector<BezierCurve> FontV1::Z(){
    BezierCurve curve1Z;

    // Bas
    curve1Z.addPoint(Point(190, 150));
    curve1Z.addPoint(Point(310, 150));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190+thickness_, 150+thickness_));
    curve1Z.addPoint(Point(310, 150+thickness_));
    letter_.push_back(curve1Z);

    // Haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350));
    curve1Z.addPoint(Point(310, 350));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350-thickness_));
    curve1Z.addPoint(Point(310-thickness_, 350-thickness_));
    letter_.push_back(curve1Z);

    // Diagonale
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190+thickness_, 150+thickness_));
    curve1Z.addPoint(Point(310, 350-thickness_));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 150+thickness_));
    curve1Z.addPoint(Point(310-thickness_, 350-thickness_));
    letter_.push_back(curve1Z);

    // Bord haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350));
    curve1Z.addPoint(Point(190, 350-thickness_));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(310, 350));
    curve1Z.addPoint(Point(310, 350-thickness_));
    letter_.push_back(curve1Z);

    // Bord bas
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 150));
    curve1Z.addPoint(Point(190, 150+thickness_));
    letter_.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(310, 150));
    curve1Z.addPoint(Point(310, 150+thickness_));
    letter_.push_back(curve1Z);

    return letter_;
}































