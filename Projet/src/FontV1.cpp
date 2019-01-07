/*!
 * \file FontV1.cpp
 * \brief Class FontV1
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
#include <iostream>
#include <cmath>
#include "FontV1.h"



void FontV1::A(){
    BezierCurve curve1A;
    std::vector<BezierCurve> curves;

    // haut
    curve1A.addPoint(Point(240, 350));
    curve1A.addPoint(Point(240+thickness_, 350));
    curves.push_back(curve1A);

    // gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(240, 350));
    curve1A.addPoint(Point(150, 150));
    curves.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(260, 350));
    curve1A.addPoint(Point(350, 150));
    curves.push_back(curve1A);

    //bas gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(150, 150));
    curve1A.addPoint(Point(150+thickness_, 150));
    curves.push_back(curve1A);

    //bas droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_, 150));
    curve1A.addPoint(Point(350, 150));
    curves.push_back(curve1A);

    //bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(150+thickness_, 150));
    curve1A.addPoint(Point(200, 225));
    curves.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_, 150));
    curve1A.addPoint(Point(300, 225));
    curves.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(200, 225));
    curve1A.addPoint(Point(300, 225));
    curves.push_back(curve1A);

    // small
    // gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(200+0.5*thickness_, 225+thickness_));
    curves.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_, 225+thickness_));
    curves.push_back(curve1A);

    // bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(200+0.5*thickness_, 225+thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_, 225+thickness_));
    curves.push_back(curve1A);

    img_.draw(curves);
    
}

void FontV1::B(){
    BezierCurve curve1B;
    std::vector<BezierCurve> curves;

    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150, 350));
    curve1B.addPoint(Point(150, 150));
    curves.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350));
    curve1B.addPoint(Point(150, 350));
    curves.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 150));
    curve1B.addPoint(Point(150, 150));
    curves.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350));
    curve1B.addPoint(Point(300, 350));
    curve1B.addPoint(Point(300, 300));
    curves.push_back(curve1B);

    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250));
    curve1B.addPoint(Point(300, 250));
    curve1B.addPoint(Point(300, 300));
    curves.push_back(curve1B);

    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250));
    curve1B.addPoint(Point(300, 250));
    curve1B.addPoint(Point(300, 200));
    curves.push_back(curve1B);

    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 150));
    curve1B.addPoint(Point(300, 150));
    curve1B.addPoint(Point(300, 200));
    curves.push_back(curve1B);

    // small 
    // small haut
    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 350-thickness_));
    curve1B.addPoint(Point(150+thickness_, 250+0.5*thickness_));
    curves.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350-thickness_));
    curve1B.addPoint(Point(150+thickness_, 350-thickness_));
    curves.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250+0.5*thickness_));
    curve1B.addPoint(Point(150+thickness_, 250+0.5*thickness_));
    curves.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 350-thickness_));
    curve1B.addPoint(Point(300-thickness_, 350-thickness_));
    curve1B.addPoint(Point(300-thickness_, 300));
    curves.push_back(curve1B);


    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(300-thickness_, 300));
    curve1B.addPoint(Point(300-thickness_, 250+thickness_));
    curve1B.addPoint(Point(250, 250+0.5*thickness_));
    curves.push_back(curve1B);

    // small bas
    // gauche
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 150+thickness_));
    curve1B.addPoint(Point(150+thickness_, 250-0.5*thickness_));
    curves.push_back(curve1B);

    // haut
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250-0.5*thickness_));
    curve1B.addPoint(Point(150+thickness_, 250-0.5*thickness_));
    curves.push_back(curve1B);

    // bas
    curve1B.clearPoints();
    curve1B.addPoint(Point(150+thickness_, 150+thickness_));
    curve1B.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1B);

    // haut droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(250, 250-0.5*thickness_));
    curve1B.addPoint(Point(300-thickness_, 250-thickness_));
    curve1B.addPoint(Point(300-thickness_, 200));
    curves.push_back(curve1B);


    // bas droite
    curve1B.clearPoints();
    curve1B.addPoint(Point(300-thickness_, 200));
    curve1B.addPoint(Point(300-thickness_, 150+thickness_));
    curve1B.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1B);

    img_.draw(curves);
    
}

void FontV1::C() {
    BezierCurve curve1C;
    std::vector<BezierCurve> curves;

    // haut petit trait
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320));
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curves.push_back(curve1C);
    
    // haut droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320));
    curve1C.addPoint(Point(300, 350));
    curve1C.addPoint(Point(250, 350));
    curves.push_back(curve1C);

    // haut gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170, 250));
    curve1C.addPoint(Point(170, 350));
    curve1C.addPoint(Point(250, 350));
    curves.push_back(curve1C);

    // bas gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170, 250));
    curve1C.addPoint(Point(170, 150));
    curve1C.addPoint(Point(250, 150));
    curves.push_back(curve1C);

    // bas droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320, 320-(320-250)*2));
    curve1C.addPoint(Point(300, 350-(350-250)*2));
    curve1C.addPoint(Point(250, 350-(350-250)*2));
    curves.push_back(curve1C);

    // Small
    // haut droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curve1C.addPoint(Point(300-thickness_, 350-thickness_));
    curve1C.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1C);

    // // haut gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170+thickness_, 250));
    curve1C.addPoint(Point(170+thickness_, 350-thickness_));
    curve1C.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1C);

    // bas gauche
    curve1C.clearPoints();
    curve1C.addPoint(Point(170+thickness_, 250));
    curve1C.addPoint(Point(170+thickness_, 150+thickness_));
    curve1C.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1C);

    // bas droite
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10-(320-thickness_+10-250)*2));
    curve1C.addPoint(Point(300-thickness_, 350-thickness_-(350-thickness_-250)*2));
    curve1C.addPoint(Point(250, 350-thickness_-(100-thickness_)*2));
    curves.push_back(curve1C);

    // haut petit trait
    curve1C.clearPoints();
    curve1C.addPoint(Point(320-thickness_+3, 320-thickness_+10-(320-thickness_+10-250)*2));
    curve1C.addPoint(Point(320, 320-(320-250)*2));
    curves.push_back(curve1C);

    img_.draw(curves);
}

void FontV1::D(){
    BezierCurve curve1D;
    std::vector<BezierCurve> curves;

    // gauche
    curve1D.addPoint(Point(200, 150));
    curve1D.addPoint(Point(200, 350));
    curves.push_back(curve1D);

    // bas droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(200, 150));
    curve1D.addPoint(Point(350, 150));
    curve1D.addPoint(Point(350, 250));
    curves.push_back(curve1D);

    // haut droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(350, 250));
    curve1D.addPoint(Point(350, 350));
    curve1D.addPoint(Point(200, 350));
    curves.push_back(curve1D);

    // small
    // gauche
    curve1D.clearPoints();
    curve1D.addPoint(Point(200+thickness_, 150+thickness_));
    curve1D.addPoint(Point(200+thickness_, 350-thickness_));
    curves.push_back(curve1D);

    // bas droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(200+thickness_, 150+thickness_));
    curve1D.addPoint(Point(350-thickness_, 150+thickness_));
    curve1D.addPoint(Point(350-thickness_, 250));
    curves.push_back(curve1D);

    // haut droite
    curve1D.clearPoints();
    curve1D.addPoint(Point(350-thickness_, 250));
    curve1D.addPoint(Point(350-thickness_, 350-thickness_));
    curve1D.addPoint(Point(200+thickness_, 350-thickness_));
    curves.push_back(curve1D);

    img_.draw(curves);
}

void FontV1::E(){
    BezierCurve curve1E;
    std::vector<BezierCurve> curves;

    // haut
    curve1E.addPoint(Point(200, 340));
    curve1E.addPoint(Point(280, 340));
    curves.push_back(curve1E);

    // gauche
    curve1E.clearPoints();
    curve1E.addPoint(Point(200, 340));
    curve1E.addPoint(Point(200, 200));
    curves.push_back(curve1E);

    // bas
    curve1E.clearPoints();
    curve1E.addPoint(Point(200, 200));
    curve1E.addPoint(Point(280, 200));
    curves.push_back(curve1E);

    //dc1
    curve1E.clearPoints();
    curve1E.addPoint(Point(280, 340));
    curve1E.addPoint(Point(280, 340-thickness_));
    curves.push_back(curve1E);

    //dc2
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-thickness_));
    curve1E.addPoint(Point(200+thickness_, 340-3*thickness_));
    curves.push_back(curve1E);

    //dc3
    curve1E.clearPoints();
    curve1E.addPoint(Point(280, 340-3*thickness_));
    curve1E.addPoint(Point(280, 340-4*thickness_));
    curves.push_back(curve1E);

    //dc4
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-4*thickness_));
    curve1E.addPoint(Point(200+thickness_, 340-6*thickness_));
    curves.push_back(curve1E);

    //dc5
    curve1E.clearPoints();
    curve1E.addPoint(Point(280, 340-6*thickness_));
    curve1E.addPoint(Point(280, 340-7*thickness_));
    curves.push_back(curve1E);

    //dl1
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-thickness_));
    curve1E.addPoint(Point(280, 340-thickness_));
    curves.push_back(curve1E);

    //dl2
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-3*thickness_));
    curve1E.addPoint(Point(280, 340-3*thickness_));
    curves.push_back(curve1E);

    //dl3
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-4*thickness_));
    curve1E.addPoint(Point(280, 340-4*thickness_));
    curves.push_back(curve1E);

    //dl4
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 340-6*thickness_));
    curve1E.addPoint(Point(280, 340-6*thickness_));
    curves.push_back(curve1E);

    img_.draw(curves);
}

void FontV1::F(){
    BezierCurve curve1F;
    std::vector<BezierCurve> curves;

    // haut
    curve1F.addPoint(Point(200, 340));
    curve1F.addPoint(Point(280, 340));
    curves.push_back(curve1F);

    // gauche
    curve1F.clearPoints();
    curve1F.addPoint(Point(200, 340));
    curve1F.addPoint(Point(200, 200));
    curves.push_back(curve1F);

    // bas
    curve1F.clearPoints();
    curve1F.addPoint(Point(200, 200));
    curve1F.addPoint(Point(200+thickness_, 200));
    curves.push_back(curve1F);

    //dc1
    curve1F.clearPoints();
    curve1F.addPoint(Point(280, 340));
    curve1F.addPoint(Point(280, 340-thickness_));
    curves.push_back(curve1F);

    //dc2
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 340-thickness_));
    curve1F.addPoint(Point(200+thickness_, 340-3*thickness_));
    curves.push_back(curve1F);

    //dc3
    curve1F.clearPoints();
    curve1F.addPoint(Point(280, 340-3*thickness_));
    curve1F.addPoint(Point(280, 340-4*thickness_));
    curves.push_back(curve1F);

    //dc4
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 340-4*thickness_));
    curve1F.addPoint(Point(200+thickness_, 340-7*thickness_));
    curves.push_back(curve1F);

    //dl1
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 340-thickness_));
    curve1F.addPoint(Point(280, 340-thickness_));
    curves.push_back(curve1F);

    //dl2
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 340-3*thickness_));
    curve1F.addPoint(Point(280, 340-3*thickness_));
    curves.push_back(curve1F);

    //dl3
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 340-4*thickness_));
    curve1F.addPoint(Point(280, 340-4*thickness_));
    curves.push_back(curve1F);

    img_.draw(curves);
}

void FontV1::G() {
    BezierCurve curve1G;
    std::vector<BezierCurve> curves;

    // haut petit trait
    curve1G.clearPoints();
    curve1G.addPoint(Point(320, 320));
    curve1G.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curves.push_back(curve1G);

    // haut droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(320, 320));
    curve1G.addPoint(Point(300, 350));
    curve1G.addPoint(Point(250, 350));
    curves.push_back(curve1G);

    // haut gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170, 250));
    curve1G.addPoint(Point(170, 350));
    curve1G.addPoint(Point(250, 350));
    curves.push_back(curve1G);

    // bas gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170, 250));
    curve1G.addPoint(Point(170, 150));
    curve1G.addPoint(Point(250, 150));
    curves.push_back(curve1G);

    // // bas droite // POUR COLORIER
    // curve1G.clearPoints();
    // curve1G.addPoint(Point(330, 250, 255));
    // curve1G.addPoint(Point(330, 150, 255));
    // curve1G.addPoint(Point(250, 150, 255));
    // curves.push_back(curve1G);

    // bas droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 175));
    curve1G.addPoint(Point(330-thickness_-16, 150+1));
    curve1G.addPoint(Point(250, 150));
    curves.push_back(curve1G);

    // trait droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 250));
    curve1G.addPoint(Point(330, 150));
    curves.push_back(curve1G);

    // trait gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 175));
    curve1G.addPoint(Point(330-thickness_, 150));
    curves.push_back(curve1G);

    // trait bas
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 150));
    curve1G.addPoint(Point(330-thickness_, 150));
    curves.push_back(curve1G);

    // trait haut
    curve1G.clearPoints();
    curve1G.addPoint(Point(330, 250));
    curve1G.addPoint(Point(330-thickness_, 250));
    curves.push_back(curve1G);

    // Small
    // haut droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(320-thickness_+3, 320-thickness_+10));
    curve1G.addPoint(Point(300-thickness_, 350-thickness_));
    curve1G.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1G);

    // // haut gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170+thickness_, 250));
    curve1G.addPoint(Point(170+thickness_, 350-thickness_));
    curve1G.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1G);

    // bas gauche
    curve1G.clearPoints();
    curve1G.addPoint(Point(170+thickness_, 250));
    curve1G.addPoint(Point(170+thickness_, 150+thickness_));
    curve1G.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1G);

    // bas droite
    curve1G.clearPoints();
    curve1G.addPoint(Point(330-thickness_, 250));
    curve1G.addPoint(Point(330-thickness_, 150+thickness_));
    curve1G.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1G);

    img_.draw(curves);
}

void FontV1::O() {
    BezierCurve curve1O;
    std::vector<BezierCurve> curves;

    // haut droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 350));
    curve1O.addPoint(Point(250, 350));
    curves.push_back(curve1O);

    // haut gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 350));
    curve1O.addPoint(Point(250, 350));
    curves.push_back(curve1O);

    // bas gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 150));
    curve1O.addPoint(Point(250, 150));
    curves.push_back(curve1O);

    // bas droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 150));
    curve1O.addPoint(Point(250, 150));
    curves.push_back(curve1O);


    // Small
    // haut droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1O);

    // haut gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1O);

    // bas gauche
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1O);

    // bas droite
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1O);

    // for (int i = thickness_; i > 0; i--) {
    //     // haut droite
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(330-i, 250));
    //     curve1O.addPoint(Point(330-i, 350-i));
    //     curve1O.addPoint(Point(250, 350-i));
    //     curves.push_back(curve1O);

    //     // haut gauche
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(170+i, 250));
    //     curve1O.addPoint(Point(170+i, 350-i));
    //     curve1O.addPoint(Point(250, 350-i));
    //     curves.push_back(curve1O);

    //     // bas gauche
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(170+i, 250));
    //     curve1O.addPoint(Point(170+i, 150+i));
    //     curve1O.addPoint(Point(250, 150+i));
    //     curves.push_back(curve1O);

    //     // bas droite
    //     curve1O.clearPoints();
    //     curve1O.addPoint(Point(330-i, 250));
    //     curve1O.addPoint(Point(330-i, 150+i));
    //     curve1O.addPoint(Point(250, 150+i));
    //     curves.push_back(curve1O);
    // }
    

    img_.draw(curves);
}

void FontV1::S(){
    BezierCurve curve1S;
    std::vector<BezierCurve> curves;

    // haut
    curve1S.clearPoints();
    curve1S.addPoint(Point(380, 420));
    curve1S.addPoint(Point(260, 520));
    curve1S.addPoint(Point(170, 420));
    curves.push_back(curve1S);

    // gauche 
    curve1S.clearPoints();
    curve1S.addPoint(Point(170, 420));
    curve1S.addPoint(Point(120, 360));
    curve1S.addPoint(Point(180, 300));
    curves.push_back(curve1S);

    // milieu
    curve1S.clearPoints();
    curve1S.addPoint(Point(180, 300));
    curve1S.addPoint(Point(310, 180));
    curves.push_back(curve1S);

    // droite
    curve1S.clearPoints();
    curve1S.addPoint(Point(310, 180));
    curve1S.addPoint(Point(320, 165));
    curve1S.addPoint(Point(310, 150));
    curves.push_back(curve1S);

    // bas
    curve1S.clearPoints();
    curve1S.addPoint(Point(310, 150));
    curve1S.addPoint(Point(250, 70));
    curve1S.addPoint(Point(150, 150));
    curves.push_back(curve1S);






    // haut
    curve1S.clearPoints();
    curve1S.addPoint(Point(360, 380));
    curve1S.addPoint(Point(260, 460));
    curve1S.addPoint(Point(200, 380));
    curves.push_back(curve1S);

    // gauche 
    curve1S.clearPoints();
    curve1S.addPoint(Point(200, 380));
    curve1S.addPoint(Point(190, 365));
    curve1S.addPoint(Point(200, 350));
    curves.push_back(curve1S);

    // milieu
    curve1S.clearPoints();
    curve1S.addPoint(Point(200, 350));
    curve1S.addPoint(Point(340, 220));
    curves.push_back(curve1S);

    // droite
    curve1S.clearPoints();
    curve1S.addPoint(Point(340, 220));
    curve1S.addPoint(Point(390, 160));
    curve1S.addPoint(Point(340, 110));
    curves.push_back(curve1S);

    // bas
    curve1S.clearPoints();
    curve1S.addPoint(Point(340, 110));
    curve1S.addPoint(Point(250, 10));
    curve1S.addPoint(Point(130, 110));
    curves.push_back(curve1S);

    // lier
    curve1S.clearPoints();
    curve1S.addPoint(Point(130, 110));
    curve1S.addPoint(Point(150, 150));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(360, 380));
    curve1S.addPoint(Point(380, 420));
    curves.push_back(curve1S);

    img_.draw(curves);
}





void FontV1::Y(){
    BezierCurve curve1Y;
    std::vector<BezierCurve> curves;

    // Upper gauche
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(190, 350));
    curve1Y.addPoint(Point(190+thickness_, 350));
    curves.push_back(curve1Y);

    // Upper droite
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(310, 350));
    curve1Y.addPoint(Point(310-thickness_, 350));
    curves.push_back(curve1Y);

    // Middle Right
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(310, 350));
    curve1Y.addPoint(Point(250+thickness_/2, 250));
    curves.push_back(curve1Y);

    curve1Y.clearPoints();
    curve1Y.addPoint(Point(310-thickness_, 350));
    curve1Y.addPoint(Point(250, 250+thickness_+5));
    curves.push_back(curve1Y);

    // Middle Left
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(250-thickness_/2, 250));
    curve1Y.addPoint(Point(190, 350));
    curves.push_back(curve1Y);

    curve1Y.clearPoints();
    curve1Y.addPoint(Point(190+thickness_, 350));
    curve1Y.addPoint(Point(250, 250+thickness_+5));
    curves.push_back(curve1Y);

    // Bottom left
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(250-thickness_/2, 150));
    curve1Y.addPoint(Point(250-thickness_/2, 250));
    curves.push_back(curve1Y);
 
    img_.draw(curves);

    // Bottom right
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(250+thickness_/2, 150));
    curve1Y.addPoint(Point(250+thickness_/2, 250));
    curves.push_back(curve1Y);

    // Bottom
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(250+thickness_/2, 150));
    curve1Y.addPoint(Point(250-thickness_/2, 150));
    curves.push_back(curve1Y);

    img_.draw(curves);
}

void FontV1::Z(){
    BezierCurve curve1Z;
    std::vector<BezierCurve> curves;

    // Bas
    curve1Z.addPoint(Point(190, 150));
    curve1Z.addPoint(Point(310, 150));
    curves.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190+thickness_, 150+thickness_));
    curve1Z.addPoint(Point(310, 150+thickness_));
    curves.push_back(curve1Z);

    // Haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350));
    curve1Z.addPoint(Point(310, 350));
    curves.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350-thickness_));
    curve1Z.addPoint(Point(310-thickness_, 350-thickness_));
    curves.push_back(curve1Z);

    // Diagonale
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190+thickness_, 150+thickness_));
    curve1Z.addPoint(Point(310, 350-thickness_));
    curves.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 150+thickness_));
    curve1Z.addPoint(Point(310-thickness_, 350-thickness_));
    curves.push_back(curve1Z);

    // Bord haut
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 350));
    curve1Z.addPoint(Point(190, 350-thickness_));
    curves.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(310, 350));
    curve1Z.addPoint(Point(310, 350-thickness_));
    curves.push_back(curve1Z);

    // Bord bas
    curve1Z.clearPoints();
    curve1Z.addPoint(Point(190, 150));
    curve1Z.addPoint(Point(190, 150+thickness_));
    curves.push_back(curve1Z);

    curve1Z.clearPoints();
    curve1Z.addPoint(Point(310, 150));
    curve1Z.addPoint(Point(310, 150+thickness_));
    curves.push_back(curve1Z);

    img_.draw(curves);
}

void FontV1::finishLetter() {
    img_.writeImage();
}































