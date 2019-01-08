/*!
 * \file FontV1.cpp
 * \brief Class FontV1
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
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
    curve1A.addPoint(Point(150+10, 150));
    curves.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(260, 350));
    curve1A.addPoint(Point(350-10, 150));
    curves.push_back(curve1A);

    //bas gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(150+10, 150));
    curve1A.addPoint(Point(150+thickness_+10, 150));
    curves.push_back(curve1A);

    //bas droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_-10, 150));
    curve1A.addPoint(Point(350-10, 150));
    curves.push_back(curve1A);

    //bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(150+thickness_+10, 150));
    curve1A.addPoint(Point(200+10, 225));
    curves.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(350-thickness_-10, 150));
    curve1A.addPoint(Point(300-10, 225));
    curves.push_back(curve1A);

    curve1A.clearPoints();
    curve1A.addPoint(Point(200+10, 225));
    curve1A.addPoint(Point(300-10, 225));
    curves.push_back(curve1A);

    // small
    // gauche
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(200+0.5*thickness_+10, 225+thickness_));
    curves.push_back(curve1A);

    // droite
    curve1A.clearPoints();
    curve1A.addPoint(Point(250, 350-thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_-10, 225+thickness_));
    curves.push_back(curve1A);

    // bas
    curve1A.clearPoints();
    curve1A.addPoint(Point(200+0.5*thickness_+10, 225+thickness_));
    curve1A.addPoint(Point(300-0.5*thickness_-10, 225+thickness_));
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
    curve1E.addPoint(Point(200, 350));
    curve1E.addPoint(Point(340, 350));
    curves.push_back(curve1E);

    // gauche
    curve1E.clearPoints();
    curve1E.addPoint(Point(200, 350));
    curve1E.addPoint(Point(200, 150));
    curves.push_back(curve1E);

    // bas
    curve1E.clearPoints();
    curve1E.addPoint(Point(200, 150));
    curve1E.addPoint(Point(340, 150));
    curves.push_back(curve1E);

    //dc1
    curve1E.clearPoints();
    curve1E.addPoint(Point(340, 350));
    curve1E.addPoint(Point(340, 350-thickness_));
    curves.push_back(curve1E);

    //dc2
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 350-thickness_));
    curve1E.addPoint(Point(200+thickness_, 280-thickness_));
    curves.push_back(curve1E);

    //dc3
    curve1E.clearPoints();
    curve1E.addPoint(Point(340, 280-thickness_));
    curve1E.addPoint(Point(340, 280-2*thickness_));
    curves.push_back(curve1E);

    //dc4
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 280-2*thickness_));
    curve1E.addPoint(Point(200+thickness_, 210-2*thickness_));
    curves.push_back(curve1E);

    //dc5
    curve1E.clearPoints();
    curve1E.addPoint(Point(340, 210-2*thickness_));
    curve1E.addPoint(Point(340, 150));
    curves.push_back(curve1E);

    //dl1
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 350-thickness_));
    curve1E.addPoint(Point(340, 350-thickness_));
    curves.push_back(curve1E);

    //dl2
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 280-thickness_));
    curve1E.addPoint(Point(340, 280-thickness_));
    curves.push_back(curve1E);

    //dl3
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 280-2*thickness_));
    curve1E.addPoint(Point(340, 280-2*thickness_));
    curves.push_back(curve1E);

    //dl4
    curve1E.clearPoints();
    curve1E.addPoint(Point(200+thickness_, 210-2*thickness_));
    curve1E.addPoint(Point(340, 210-2*thickness_));
    curves.push_back(curve1E);

    img_.draw(curves);
}

void FontV1::F(){
    BezierCurve curve1F;
    std::vector<BezierCurve> curves;

    // haut
    curve1F.addPoint(Point(200, 350));
    curve1F.addPoint(Point(340, 350));
    curves.push_back(curve1F);

    // gauche
    curve1F.clearPoints();
    curve1F.addPoint(Point(200, 350));
    curve1F.addPoint(Point(200, 150));
    curves.push_back(curve1F);

    // bas
    curve1F.clearPoints();
    curve1F.addPoint(Point(200, 150));
    curve1F.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1F);

    //dc1
    curve1F.clearPoints();
    curve1F.addPoint(Point(340, 350));
    curve1F.addPoint(Point(340, 350-thickness_));
    curves.push_back(curve1F);

    //dc2
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 350-thickness_));
    curve1F.addPoint(Point(200+thickness_, 280-thickness_));
    curves.push_back(curve1F);

    //dc3
    curve1F.clearPoints();
    curve1F.addPoint(Point(340, 280-thickness_));
    curve1F.addPoint(Point(340, 280-2*thickness_));
    curves.push_back(curve1F);

    //dc4
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 280-2*thickness_));
    curve1F.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1F);

    //dl1
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 350-thickness_));
    curve1F.addPoint(Point(340, 350-thickness_));
    curves.push_back(curve1F);

    //dl2
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 280-thickness_));
    curve1F.addPoint(Point(340, 280-thickness_));
    curves.push_back(curve1F);

    //dl3
    curve1F.clearPoints();
    curve1F.addPoint(Point(200+thickness_, 280-2*thickness_));
    curve1F.addPoint(Point(340, 280-2*thickness_));
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

void FontV1::H(){
    BezierCurve curve1H;
    std::vector<BezierCurve> curves;

    // haut
    curve1H.clearPoints();
    curve1H.addPoint(Point(200, 310));
    curve1H.addPoint(Point(200+thickness_, 310));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(310, 310));
    curve1H.addPoint(Point(310-thickness_, 310));
    curves.push_back(curve1H);

    //bas
    curve1H.clearPoints();
    curve1H.addPoint(Point(200, 150));
    curve1H.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(310, 150));
    curve1H.addPoint(Point(310-thickness_, 150));
    curves.push_back(curve1H);

    // gauche
    curve1H.clearPoints();
    curve1H.addPoint(Point(200, 150));
    curve1H.addPoint(Point(200, 310));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(200+thickness_, 150));
    curve1H.addPoint(Point(200+thickness_, 220));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(200+thickness_, 220+thickness_));
    curve1H.addPoint(Point(200+thickness_, 310));
    curves.push_back(curve1H);

    // droite
    curve1H.clearPoints();
    curve1H.addPoint(Point(310, 150));
    curve1H.addPoint(Point(310, 310));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(310-thickness_, 150));
    curve1H.addPoint(Point(310-thickness_, 220));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(310-thickness_, 220+thickness_));
    curve1H.addPoint(Point(310-thickness_, 310));
    curves.push_back(curve1H);

    // milieu
    curve1H.clearPoints();
    curve1H.addPoint(Point(310-thickness_, 220));
    curve1H.addPoint(Point(200+thickness_, 220));
    curves.push_back(curve1H);

    curve1H.clearPoints();
    curve1H.addPoint(Point(310-thickness_, 220+thickness_));
    curve1H.addPoint(Point(200+thickness_, 220+thickness_));
    curves.push_back(curve1H);

    img_.draw(curves);
}

void FontV1::I(){
    BezierCurve curve1I;
    std::vector<BezierCurve> curves;

    // haut
    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 350));
    curve1I.addPoint(Point(280, 350));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 350-thickness_));
    curve1I.addPoint(Point(240, 350-thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(280, 350-thickness_));
    curve1I.addPoint(Point(240+thickness_, 350-thickness_));
    curves.push_back(curve1I);

    //bas
    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 150));
    curve1I.addPoint(Point(280, 150));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 150+thickness_));
    curve1I.addPoint(Point(240, 150+thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(280, 150+thickness_));
    curve1I.addPoint(Point(240+thickness_, 150+thickness_));
    curves.push_back(curve1I);

    // gauche
    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 350));
    curve1I.addPoint(Point(220, 350-thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(220, 150));
    curve1I.addPoint(Point(220, 150+thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(240, 350-thickness_));
    curve1I.addPoint(Point(240, 150+thickness_));
    curves.push_back(curve1I);

    // droite
    curve1I.clearPoints();
    curve1I.addPoint(Point(280, 350));
    curve1I.addPoint(Point(280, 350-thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(280, 150));
    curve1I.addPoint(Point(280, 150+thickness_));
    curves.push_back(curve1I);

    curve1I.clearPoints();
    curve1I.addPoint(Point(240+thickness_, 350-thickness_));
    curve1I.addPoint(Point(240+thickness_, 150+thickness_));
    curves.push_back(curve1I);

    img_.draw(curves);
}

void FontV1::J(){
    BezierCurve curve1J;
    std::vector<BezierCurve> curves;

    // bas gauche
    curve1J.clearPoints();
    curve1J.addPoint(Point(200, 200));
    curve1J.addPoint(Point(200+thickness_, 200));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(200, 200));
    curve1J.addPoint(Point(200, 150));
    curve1J.addPoint(Point(250, 150));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(200+thickness_, 200));
    curve1J.addPoint(Point(200+thickness_, 150+thickness_));
    curve1J.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1J);

    // bas droite
    curve1J.clearPoints();
    curve1J.addPoint(Point(250, 150));
    curve1J.addPoint(Point(300, 150));
    curve1J.addPoint(Point(300, 200));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(250, 150+thickness_));
    curve1J.addPoint(Point(300-thickness_, 150+thickness_));
    curve1J.addPoint(Point(300-thickness_, 200));
    curves.push_back(curve1J);

    // droite
    curve1J.clearPoints();
    curve1J.addPoint(Point(300-thickness_, 350));
    curve1J.addPoint(Point(300-thickness_, 200));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(300, 350));
    curve1J.addPoint(Point(300, 200));
    curves.push_back(curve1J);

    // haut
    curve1J.clearPoints();
    curve1J.addPoint(Point(300, 350));
    curve1J.addPoint(Point(330, 350));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(300-thickness_, 350));
    curve1J.addPoint(Point(270-thickness_, 350));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(330, 350+thickness_));
    curve1J.addPoint(Point(270-thickness_, 350+thickness_));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(270-thickness_, 350));
    curve1J.addPoint(Point(270-thickness_, 350+thickness_));
    curves.push_back(curve1J);

    curve1J.clearPoints();
    curve1J.addPoint(Point(330, 350));
    curve1J.addPoint(Point(330, 350+thickness_));
    curves.push_back(curve1J);

    img_.draw(curves);
}

void FontV1::K(){
    BezierCurve curve1K;
    std::vector<BezierCurve> curves;

    // gauche
    curve1K.clearPoints();
    curve1K.addPoint(Point(200, 150));
    curve1K.addPoint(Point(200, 350));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(200, 350));
    curve1K.addPoint(Point(200+thickness_, 350));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(200, 150));
    curve1K.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(200+thickness_, 150));
    curve1K.addPoint(Point(200+thickness_, 240));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(200+thickness_, 260));
    curve1K.addPoint(Point(200+thickness_, 350));
    curves.push_back(curve1K);

    // haut droite
    curve1K.clearPoints();
    curve1K.addPoint(Point(200+thickness_, 260));
    curve1K.addPoint(Point(320, 350));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(190+2*thickness_, 250));
    curve1K.addPoint(Point(320+thickness_, 350));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(320, 350));
    curve1K.addPoint(Point(320+thickness_, 350));
    curves.push_back(curve1K);

    // bas droite
    curve1K.clearPoints();
    curve1K.addPoint(Point(200+thickness_, 240));
    curve1K.addPoint(Point(320, 150));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(190+2*thickness_, 250));
    curve1K.addPoint(Point(320+thickness_, 150));
    curves.push_back(curve1K);

    curve1K.clearPoints();
    curve1K.addPoint(Point(320, 150));
    curve1K.addPoint(Point(320+thickness_, 150));
    curves.push_back(curve1K);

    img_.draw(curves);
}

void FontV1::L(){
    BezierCurve curve1L;
    std::vector<BezierCurve> curves;

    // gauche
    curve1L.clearPoints();
    curve1L.addPoint(Point(200, 150));
    curve1L.addPoint(Point(200, 350));
    curves.push_back(curve1L);

    curve1L.clearPoints();
    curve1L.addPoint(Point(200, 350));
    curve1L.addPoint(Point(200+thickness_, 350));
    curves.push_back(curve1L);

    curve1L.clearPoints();
    curve1L.addPoint(Point(200+thickness_, 350));
    curve1L.addPoint(Point(200+thickness_, 150+thickness_));
    curves.push_back(curve1L);

    // bas
    curve1L.clearPoints();
    curve1L.addPoint(Point(350, 150+thickness_));
    curve1L.addPoint(Point(200+thickness_, 150+thickness_));
    curves.push_back(curve1L);

    curve1L.clearPoints();
    curve1L.addPoint(Point(350, 150));
    curve1L.addPoint(Point(200, 150));
    curves.push_back(curve1L);

    curve1L.clearPoints();
    curve1L.addPoint(Point(350, 150));
    curve1L.addPoint(Point(350, 150+thickness_));
    curves.push_back(curve1L);

    img_.draw(curves);
}

void FontV1::M(){
    BezierCurve curve1M;
    std::vector<BezierCurve> curves;

    // Left
    curve1M.addPoint(Point(190-30, 150));
    curve1M.addPoint(Point(190-30, 350));
    curves.push_back(curve1M);

    curve1M.clearPoints();
    curve1M.addPoint(Point(190-30+thickness_, 150));
    curve1M.addPoint(Point(190-30+thickness_, 350-thickness_-15));
    curves.push_back(curve1M);

    // Right
    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30, 150));
    curve1M.addPoint(Point(310+30, 350));
    curves.push_back(curve1M);

    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30-thickness_, 150));
    curve1M.addPoint(Point(310+30-thickness_, 350-thickness_-15));
    curves.push_back(curve1M);

    // Upper Left
    curve1M.clearPoints();
    curve1M.addPoint(Point(190-30, 350));
    curve1M.addPoint(Point(190-30+thickness_, 350));
    curves.push_back(curve1M);

    // Upper Right
    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30, 350));
    curve1M.addPoint(Point(310+30-thickness_, 350));
    curves.push_back(curve1M);

    // Bottom Left
    curve1M.clearPoints();
    curve1M.addPoint(Point(190-30, 150));
    curve1M.addPoint(Point(190-30+thickness_, 150));
    curves.push_back(curve1M);

    // Bottom Right
    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30-thickness_, 150));
    curve1M.addPoint(Point(310+30, 150));
    curves.push_back(curve1M);

    // Middle Up Left
    curve1M.clearPoints();
    curve1M.addPoint(Point(190-30+thickness_, 350));
    curve1M.addPoint(Point(250, 250+thickness_-25));
    curves.push_back(curve1M);

    // Middle Up Right
    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30-thickness_, 350));
    curve1M.addPoint(Point(250, 250+thickness_-25));
    curves.push_back(curve1M);

    // Middle Down Left
    curve1M.clearPoints();
    curve1M.addPoint(Point(190-30+thickness_, 350-thickness_-15));
    curve1M.addPoint(Point(250-10, 250-20));
    curves.push_back(curve1M);

    // Middle Down Right
    curve1M.clearPoints();
    curve1M.addPoint(Point(310+30-thickness_, 350-thickness_-15));
    curve1M.addPoint(Point(250+10, 250-20));
    curves.push_back(curve1M);

    curve1M.clearPoints();
    curve1M.addPoint(Point(250+10, 250-20));
    curve1M.addPoint(Point(250-10, 250-20));
    curves.push_back(curve1M);

    img_.draw(curves);
}

void FontV1::N(){
    BezierCurve curve1N;
    std::vector<BezierCurve> curves;

    // Left
    curve1N.addPoint(Point(190, 150));
    curve1N.addPoint(Point(190, 350));
    curves.push_back(curve1N);

    curve1N.clearPoints();
    curve1N.addPoint(Point(190+thickness_, 150));
    curve1N.addPoint(Point(190+thickness_, 350-thickness_-20));
    curves.push_back(curve1N);

    // Right
    curve1N.clearPoints();
    curve1N.addPoint(Point(310, 150));
    curve1N.addPoint(Point(310, 350));
    curves.push_back(curve1N);

    curve1N.clearPoints();
    curve1N.addPoint(Point(310-thickness_, 150+thickness_+20));
    curve1N.addPoint(Point(310-thickness_, 350));
    curves.push_back(curve1N);

    // Middle up
    curve1N.clearPoints();
    curve1N.addPoint(Point(190+thickness_, 350));
    curve1N.addPoint(Point(310-thickness_, 150+thickness_+20));
    curves.push_back(curve1N);

    // Middle Down
    curve1N.clearPoints();
    curve1N.addPoint(Point(190+thickness_, 350-thickness_-20));
    curve1N.addPoint(Point(310-thickness_, 150));
    curves.push_back(curve1N);

    // Upper Left
    curve1N.clearPoints();
    curve1N.addPoint(Point(190, 350));
    curve1N.addPoint(Point(190+thickness_, 350));
    curves.push_back(curve1N);

    // Upper Right
    curve1N.clearPoints();
    curve1N.addPoint(Point(310, 350));
    curve1N.addPoint(Point(310-thickness_, 350));
    curves.push_back(curve1N);

    // Bottom Left
    curve1N.clearPoints();
    curve1N.addPoint(Point(190, 150));
    curve1N.addPoint(Point(190+thickness_, 150));
    curves.push_back(curve1N);

    // Bottom Right
    curve1N.clearPoints();
    curve1N.addPoint(Point(310-thickness_, 150));
    curve1N.addPoint(Point(310, 150));
    curves.push_back(curve1N);

    img_.draw(curves);
}

void FontV1::O() {
    BezierCurve curve1O;
    std::vector<BezierCurve> curves;

    // upper right
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 350));
    curve1O.addPoint(Point(250, 350));
    curves.push_back(curve1O);

    // upper left
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 350));
    curve1O.addPoint(Point(250, 350));
    curves.push_back(curve1O);

    // bottom left
    curve1O.clearPoints();
    curve1O.addPoint(Point(170, 250));
    curve1O.addPoint(Point(170, 150));
    curve1O.addPoint(Point(250, 150));
    curves.push_back(curve1O);

    // bottom right
    curve1O.clearPoints();
    curve1O.addPoint(Point(330, 250));
    curve1O.addPoint(Point(330, 150));
    curve1O.addPoint(Point(250, 150));
    curves.push_back(curve1O);

    // Small
    // upper right
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1O);

    // upper left
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 350-thickness_));
    curve1O.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1O);

    // bottom left
    curve1O.clearPoints();
    curve1O.addPoint(Point(170+thickness_, 250));
    curve1O.addPoint(Point(170+thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1O);

    // bottom right
    curve1O.clearPoints();
    curve1O.addPoint(Point(330-thickness_, 250));
    curve1O.addPoint(Point(330-thickness_, 150+thickness_));
    curve1O.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1O);

    img_.draw(curves);
}

void FontV1::P(){
    BezierCurve curve1P;
    std::vector<BezierCurve> curves;

    // gauche
    curve1P.clearPoints();
    curve1P.addPoint(Point(200, 150));
    curve1P.addPoint(Point(200, 350));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 150));
    curve1P.addPoint(Point(200+thickness_, 250));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 250+thickness_));
    curve1P.addPoint(Point(200+thickness_, 350-thickness_));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200, 150));
    curve1P.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200, 350));
    curve1P.addPoint(Point(200+thickness_, 350));
    curves.push_back(curve1P);

    // haut
    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 350));
    curve1P.addPoint(Point(230+thickness_, 350));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 350-thickness_));
    curve1P.addPoint(Point(230+thickness_, 350-thickness_));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 250));
    curve1P.addPoint(Point(230+thickness_, 250));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(200+thickness_, 250+thickness_));
    curve1P.addPoint(Point(230+thickness_, 250+thickness_));
    curves.push_back(curve1P);

    // haut droite
    curve1P.clearPoints();
    curve1P.addPoint(Point(230+thickness_, 350));
    curve1P.addPoint(Point(280+thickness_, 350));
    curve1P.addPoint(Point(280+thickness_, 300));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(230+thickness_, 350-thickness_));
    curve1P.addPoint(Point(260+thickness_, 350-thickness_));
    curve1P.addPoint(Point(260+thickness_, 320-thickness_));
    curves.push_back(curve1P);

    //bas droite
    curve1P.clearPoints();
    curve1P.addPoint(Point(280+thickness_, 300));
    curve1P.addPoint(Point(280+thickness_, 250));
    curve1P.addPoint(Point(230+thickness_, 250));
    curves.push_back(curve1P);

    curve1P.clearPoints();
    curve1P.addPoint(Point(260+thickness_, 320-thickness_));
    curve1P.addPoint(Point(260+thickness_, 290-thickness_));
    curve1P.addPoint(Point(230+thickness_, 290-thickness_));
    curves.push_back(curve1P);

    img_.draw(curves);
}

void FontV1::Q() {
    BezierCurve curve1Q;
    std::vector<BezierCurve> curves;

    // Upper right
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(330, 250));
    curve1Q.addPoint(Point(330, 350));
    curve1Q.addPoint(Point(250, 350));
    curves.push_back(curve1Q);

    // Upper left
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(170, 250));
    curve1Q.addPoint(Point(170, 350));
    curve1Q.addPoint(Point(250, 350));
    curves.push_back(curve1Q);

    // bottom left
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(170, 250));
    curve1Q.addPoint(Point(170, 150));
    curve1Q.addPoint(Point(250, 150));
    curves.push_back(curve1Q);

    // Bottom right
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(330, 250));
    curve1Q.addPoint(Point(332, 200));
    curve1Q.addPoint(Point(305, 168));
    curves.push_back(curve1Q);

    curve1Q.clearPoints();
    curve1Q.addPoint(Point(287, 157));
    curve1Q.addPoint(Point(270, 150));
    curve1Q.addPoint(Point(250, 150));
    curves.push_back(curve1Q);

    // Right 
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(287, 157));
    curve1Q.addPoint(Point(310, 130));
    curves.push_back(curve1Q);

    curve1Q.clearPoints();
    curve1Q.addPoint(Point(305, 168));
    curve1Q.addPoint(Point(325, 145));
    curves.push_back(curve1Q);
    
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(310, 130));
    curve1Q.addPoint(Point(325, 145));
    curves.push_back(curve1Q);

    // Small
    // upper right
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(330-thickness_, 250));
    curve1Q.addPoint(Point(330-thickness_, 350-thickness_));
    curve1Q.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1Q);

    // bottom left
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(170+thickness_, 250));
    curve1Q.addPoint(Point(170+thickness_, 350-thickness_));
    curve1Q.addPoint(Point(250, 350-thickness_));
    curves.push_back(curve1Q);

    // bottom left
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(170+thickness_, 250));
    curve1Q.addPoint(Point(170+thickness_, 150+thickness_));
    curve1Q.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1Q);

    // bottom right
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(270, 153+thickness_));
    curve1Q.addPoint(Point(258, 150+thickness_));
    curve1Q.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1Q);

    curve1Q.clearPoints();
    curve1Q.addPoint(Point(330-thickness_, 250));
    curve1Q.addPoint(Point(332-thickness_, 205));
    curve1Q.addPoint(Point(288, 183));
    curves.push_back(curve1Q);

    // Left
    curve1Q.clearPoints();
    curve1Q.addPoint(Point(270, 153+thickness_));
    curve1Q.addPoint(Point(250, 190+5));
    curves.push_back(curve1Q);

    curve1Q.clearPoints();
    curve1Q.addPoint(Point(288, 183));
    curve1Q.addPoint(Point(264, 204+5));
    curves.push_back(curve1Q);

    curve1Q.clearPoints();
    curve1Q.addPoint(Point(250, 190+5));
    curve1Q.addPoint(Point(264, 204+5));
    curves.push_back(curve1Q);

    img_.draw(curves);
}

void FontV1::R(){
    BezierCurve curve1R;
    std::vector<BezierCurve> curves;

    // gauche
    curve1R.clearPoints();
    curve1R.addPoint(Point(200, 150));
    curve1R.addPoint(Point(200, 350));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 150));
    curve1R.addPoint(Point(200+thickness_, 250));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 250+thickness_));
    curve1R.addPoint(Point(200+thickness_, 350-thickness_));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200, 150));
    curve1R.addPoint(Point(200+thickness_, 150));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200, 350));
    curve1R.addPoint(Point(200+thickness_, 350));
    curves.push_back(curve1R);

    // haut
    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 350));
    curve1R.addPoint(Point(230+thickness_, 350));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 350-thickness_));
    curve1R.addPoint(Point(230+thickness_, 350-thickness_));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+2*thickness_, 250));
    curve1R.addPoint(Point(230+thickness_, 250));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 250+thickness_));
    curve1R.addPoint(Point(230+thickness_, 250+thickness_));
    curves.push_back(curve1R);

    // haut droite
    curve1R.clearPoints();
    curve1R.addPoint(Point(230+thickness_, 350));
    curve1R.addPoint(Point(280+thickness_, 350));
    curve1R.addPoint(Point(280+thickness_, 300));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(230+thickness_, 350-thickness_));
    curve1R.addPoint(Point(260+thickness_, 350-thickness_));
    curve1R.addPoint(Point(260+thickness_, 320-thickness_));
    curves.push_back(curve1R);

    //bas droite
    curve1R.clearPoints();
    curve1R.addPoint(Point(280+thickness_, 300));
    curve1R.addPoint(Point(280+thickness_, 250));
    curve1R.addPoint(Point(230+thickness_, 250));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(260+thickness_, 320-thickness_));
    curve1R.addPoint(Point(260+thickness_, 290-thickness_));
    curve1R.addPoint(Point(230+thickness_, 290-thickness_));
    curves.push_back(curve1R);

    // droite
    curve1R.clearPoints();
    curve1R.addPoint(Point(200+thickness_, 250));
    curve1R.addPoint(Point(300, 150));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(200+2*thickness_, 250));
    curve1R.addPoint(Point(300+thickness_, 150));
    curves.push_back(curve1R);

    curve1R.clearPoints();
    curve1R.addPoint(Point(300, 150));
    curve1R.addPoint(Point(300+thickness_, 150));
    curves.push_back(curve1R);

    img_.draw(curves);
}

void FontV1::S() {
    BezierCurve curve1S;
    std::vector<BezierCurve> curves;

    // haut
    curve1S.addPoint(Point(350, 350));
    curve1S.addPoint(Point(330, 380));
    curve1S.addPoint(Point(280, 380));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 380));
    curve1S.addPoint(Point(230, 380));
    curve1S.addPoint(Point(215, 350));
    curves.push_back(curve1S);

    // gauche
    curve1S.clearPoints();
    curve1S.addPoint(Point(215, 350));
    curve1S.addPoint(Point(200, 330));
    curve1S.addPoint(Point(220, 300));
    curves.push_back(curve1S);

    // middle
    curve1S.clearPoints();
    curve1S.addPoint(Point(220, 300));
    curve1S.addPoint(Point(240, 280));
    curve1S.addPoint(Point(280, 280));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 280));
    curve1S.addPoint(Point(305, 280));
    curve1S.addPoint(Point(320, 265));
    curves.push_back(curve1S);

    // droite
    curve1S.clearPoints();
    curve1S.addPoint(Point(320, 265));
    curve1S.addPoint(Point(330, 255));
    curve1S.addPoint(Point(325, 235));
    curves.push_back(curve1S);

    // bas
    curve1S.clearPoints();
    curve1S.addPoint(Point(325, 235));
    curve1S.addPoint(Point(310, 210));
    curve1S.addPoint(Point(280, 210));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 210));
    curve1S.addPoint(Point(250, 210));
    curve1S.addPoint(Point(230, 235));
    curves.push_back(curve1S);

    // haut
    curve1S.clearPoints();
    curve1S.addPoint(Point(355-thickness_, 355-thickness_));
    curve1S.addPoint(Point(330-thickness_, 380-thickness_));
    curve1S.addPoint(Point(280, 380-thickness_));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 380-thickness_));
    curve1S.addPoint(Point(230+thickness_, 380-thickness_));
    curve1S.addPoint(Point(210+thickness_, 353-thickness_));
    curves.push_back(curve1S);

    // gauche
    curve1S.clearPoints();
    curve1S.addPoint(Point(210+thickness_, 353-thickness_));
    curve1S.addPoint(Point(208+thickness_, 320));
    curve1S.addPoint(Point(210+thickness_, 300+thickness_));
    curves.push_back(curve1S);

    // middle
    curve1S.clearPoints();
    curve1S.addPoint(Point(210+thickness_, 300+thickness_));
    curve1S.addPoint(Point(220+thickness_, 280+thickness_));
    curve1S.addPoint(Point(280, 280+thickness_));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 280+thickness_));
    curve1S.addPoint(Point(300+thickness_, 275+thickness_));
    curve1S.addPoint(Point(315+thickness_, 260+thickness_));
    curves.push_back(curve1S);

    // droite
    curve1S.clearPoints();
    curve1S.addPoint(Point(315+thickness_, 260+thickness_));
    curve1S.addPoint(Point(335+thickness_, 250+thickness_));
    curve1S.addPoint(Point(325+thickness_, 235));
    curves.push_back(curve1S);

    // bas
    curve1S.clearPoints();
    curve1S.addPoint(Point(325+thickness_, 235));
    curve1S.addPoint(Point(310+thickness_, 210-thickness_));
    curve1S.addPoint(Point(280, 210-thickness_));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(280, 210-thickness_));
    curve1S.addPoint(Point(250-thickness_, 210-thickness_));
    curve1S.addPoint(Point(235-thickness_, 240-thickness_));
    curves.push_back(curve1S);

    // connect
    curve1S.clearPoints();
    curve1S.addPoint(Point(350, 350));
    curve1S.addPoint(Point(355-thickness_, 355-thickness_));
    curves.push_back(curve1S);

    curve1S.clearPoints();
    curve1S.addPoint(Point(230, 235));
    curve1S.addPoint(Point(235-thickness_, 240-thickness_));
    curves.push_back(curve1S);

    img_.draw(curves);
}

void FontV1::T(){
    BezierCurve curve1T;
    std::vector<BezierCurve> curves;

    // haut
    curve1T.clearPoints();
    curve1T.addPoint(Point(190, 350));
    curve1T.addPoint(Point(310, 350));
    curves.push_back(curve1T);

    curve1T.clearPoints();
    curve1T.addPoint(Point(190, 350-thickness_));
    curve1T.addPoint(Point(240, 350-thickness_));
    curves.push_back(curve1T);

    curve1T.clearPoints();
    curve1T.addPoint(Point(310, 350-thickness_));
    curve1T.addPoint(Point(240+thickness_, 350-thickness_));
    curves.push_back(curve1T);

    //bas
    curve1T.clearPoints();
    curve1T.addPoint(Point(240, 150));
    curve1T.addPoint(Point(240+thickness_, 150));
    curves.push_back(curve1T);

    // gauche
    curve1T.clearPoints();
    curve1T.addPoint(Point(190, 350));
    curve1T.addPoint(Point(190, 350-thickness_));
    curves.push_back(curve1T);

    curve1T.clearPoints();
    curve1T.addPoint(Point(240, 350-thickness_));
    curve1T.addPoint(Point(240, 150));
    curves.push_back(curve1T);

    // droite
    curve1T.clearPoints();
    curve1T.addPoint(Point(310, 350));
    curve1T.addPoint(Point(310, 350-thickness_));
    curves.push_back(curve1T);

    curve1T.clearPoints();
    curve1T.addPoint(Point(240+thickness_, 350-thickness_));
    curve1T.addPoint(Point(240+thickness_, 150));
    curves.push_back(curve1T);

    img_.draw(curves);
}

void FontV1::U() {
    BezierCurve curve1U;
    std::vector<BezierCurve> curves;

    // upper right
    curve1U.clearPoints();
    curve1U.addPoint(Point(330, 250));
    curve1U.addPoint(Point(330, 350));
    curves.push_back(curve1U);

    // upper left
    curve1U.clearPoints();
    curve1U.addPoint(Point(170, 250));
    curve1U.addPoint(Point(170, 350));
    curves.push_back(curve1U);

    // bottom left
    curve1U.clearPoints();
    curve1U.addPoint(Point(170, 250));
    curve1U.addPoint(Point(170, 150));
    curve1U.addPoint(Point(250, 150));
    curves.push_back(curve1U);

    // bottom right
    curve1U.clearPoints();
    curve1U.addPoint(Point(330, 250));
    curve1U.addPoint(Point(330, 150));
    curve1U.addPoint(Point(250, 150));
    curves.push_back(curve1U);

    // Small
    // upper right
    curve1U.clearPoints();
    curve1U.addPoint(Point(330-thickness_, 250));
    curve1U.addPoint(Point(330-thickness_, 350));
    curves.push_back(curve1U);

    // upper left
    curve1U.clearPoints();
    curve1U.addPoint(Point(170+thickness_, 250));
    curve1U.addPoint(Point(170+thickness_, 350));
    curves.push_back(curve1U);

    // bottom left
    curve1U.clearPoints();
    curve1U.addPoint(Point(170+thickness_, 250));
    curve1U.addPoint(Point(170+thickness_, 150+thickness_));
    curve1U.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1U);

    // bottom right
    curve1U.clearPoints();
    curve1U.addPoint(Point(330-thickness_, 250));
    curve1U.addPoint(Point(330-thickness_, 150+thickness_));
    curve1U.addPoint(Point(250, 150+thickness_));
    curves.push_back(curve1U);

    // Upper edge
    curve1U.clearPoints();
    curve1U.addPoint(Point(170, 350));
    curve1U.addPoint(Point(170+thickness_, 350));
    curves.push_back(curve1U);

    curve1U.clearPoints();
    curve1U.addPoint(Point(330, 350));
    curve1U.addPoint(Point(330-thickness_, 350));
    curves.push_back(curve1U);

    img_.draw(curves);
}

void FontV1::V() {
    BezierCurve curve1V;
    std::vector<BezierCurve> curves;

    // Right
    curve1V.clearPoints();
    curve1V.addPoint(Point(330, 350));
    curve1V.addPoint(Point(250+thickness_/2, 150));
    curves.push_back(curve1V);

    curve1V.clearPoints();
    curve1V.addPoint(Point(330-thickness_, 350));
    curve1V.addPoint(Point(250, 150+30));
    curves.push_back(curve1V);

    // Left
    curve1V.clearPoints();
    curve1V.addPoint(Point(250-thickness_/2, 150));
    curve1V.addPoint(Point(170, 350));
    curves.push_back(curve1V);

    curve1V.clearPoints();
    curve1V.addPoint(Point(250, 150+30));
    curve1V.addPoint(Point(170+thickness_, 350));
    curves.push_back(curve1V);

    // Upper edge
    curve1V.clearPoints();
    curve1V.addPoint(Point(170, 350));
    curve1V.addPoint(Point(170+thickness_, 350));
    curves.push_back(curve1V);

    curve1V.clearPoints();
    curve1V.addPoint(Point(330, 350));
    curve1V.addPoint(Point(330-thickness_, 350));
    curves.push_back(curve1V);

    // Bottom edge
    curve1V.clearPoints();
    curve1V.addPoint(Point(250-thickness_/2, 150));
    curve1V.addPoint(Point(250+thickness_/2, 150));
    curves.push_back(curve1V);

    img_.draw(curves);
}

void FontV1::W() {
    BezierCurve curve1W;
    std::vector<BezierCurve> curves;

    // Left
    // Right
    curve1W.clearPoints();
    curve1W.addPoint(Point(250, 320));
    curve1W.addPoint(Point(200+thickness_/2, 150));
    curves.push_back(curve1W);

    curve1W.clearPoints();
    curve1W.addPoint(Point(250-thickness_/2, 350));
    curve1W.addPoint(Point(200, 180));
    curves.push_back(curve1W);

    // Left
    curve1W.clearPoints();
    curve1W.addPoint(Point(200-thickness_/2, 150));
    curve1W.addPoint(Point(140, 350));
    curves.push_back(curve1W);

    curve1W.clearPoints();
    curve1W.addPoint(Point(200, 180));
    curve1W.addPoint(Point(140+thickness_, 350));
    curves.push_back(curve1W);

    // Upper left
    curve1W.clearPoints();
    curve1W.addPoint(Point(140, 350));
    curve1W.addPoint(Point(140+thickness_, 350));
    curves.push_back(curve1W);

    // Bottom left
    curve1W.clearPoints();
    curve1W.addPoint(Point(200-thickness_/2, 150));
    curve1W.addPoint(Point(200+thickness_/2, 150));
    curves.push_back(curve1W);

    // Middle
    curve1W.clearPoints();
    curve1W.addPoint(Point(250-thickness_/2, 350));
    curve1W.addPoint(Point(250+thickness_/2, 350));
    curves.push_back(curve1W);

    // Right 
    // Right
    curve1W.clearPoints();
    curve1W.addPoint(Point(350+thickness_/2, 350));
    curve1W.addPoint(Point(300+thickness_/2, 150));
    curves.push_back(curve1W);

    curve1W.clearPoints();
    curve1W.addPoint(Point(350-thickness_/2, 350));
    curve1W.addPoint(Point(300, 180));
    curves.push_back(curve1W);

    // Left
    curve1W.clearPoints();
    curve1W.addPoint(Point(300-thickness_/2, 150));
    curve1W.addPoint(Point(240+thickness_/2, 320));
    curves.push_back(curve1W);

    curve1W.clearPoints();
    curve1W.addPoint(Point(300, 180));
    curve1W.addPoint(Point(240+thickness_, 350));
    curves.push_back(curve1W);

    // Upper left
    curve1W.clearPoints();
    curve1W.addPoint(Point(340, 350));
    curve1W.addPoint(Point(340+thickness_, 350));
    curves.push_back(curve1W);

    // Bottom left
    curve1W.clearPoints();
    curve1W.addPoint(Point(300-thickness_/2, 150));
    curve1W.addPoint(Point(300+thickness_/2, 150));
    curves.push_back(curve1W);

    img_.draw(curves);
}

void FontV1::X(){
    BezierCurve curve1X;
    std::vector<BezierCurve> curves;

    // Upper gauche
    curve1X.clearPoints();
    curve1X.addPoint(Point(190, 350));
    curve1X.addPoint(Point(190+thickness_, 350));
    curves.push_back(curve1X);

    // Upper droite
    curve1X.clearPoints();
    curve1X.addPoint(Point(310, 350));
    curve1X.addPoint(Point(310-thickness_, 350));
    curves.push_back(curve1X);

    // Middle Right
    curve1X.clearPoints();
    curve1X.addPoint(Point(310, 350));
    curve1X.addPoint(Point(250+thickness_/2, 250));
    curves.push_back(curve1X);

    curve1X.clearPoints();
    curve1X.addPoint(Point(310-thickness_, 350));
    curve1X.addPoint(Point(250, 250+thickness_));
    curves.push_back(curve1X);

    // Middle Left
    curve1X.clearPoints();
    curve1X.addPoint(Point(250-thickness_/2, 250));
    curve1X.addPoint(Point(190, 350));
    curves.push_back(curve1X);

    curve1X.clearPoints();
    curve1X.addPoint(Point(190+thickness_, 350));
    curve1X.addPoint(Point(250, 250+thickness_));
    curves.push_back(curve1X);

    // lower gauche
    curve1X.clearPoints();
    curve1X.addPoint(Point(190, 150));
    curve1X.addPoint(Point(190+thickness_, 150));
    curves.push_back(curve1X);

    // lower droite
    curve1X.clearPoints();
    curve1X.addPoint(Point(310, 150));
    curve1X.addPoint(Point(310-thickness_, 150));
    curves.push_back(curve1X);

    // Middle Right
    curve1X.clearPoints();
    curve1X.addPoint(Point(310, 150));
    curve1X.addPoint(Point(250+thickness_/2, 250));
    curves.push_back(curve1X);

    curve1X.clearPoints();
    curve1X.addPoint(Point(310-thickness_, 150));
    curve1X.addPoint(Point(250, 250-thickness_));
    curves.push_back(curve1X);

    // Middle Left
    curve1X.clearPoints();
    curve1X.addPoint(Point(250-thickness_/2, 250));
    curve1X.addPoint(Point(190, 150));
    curves.push_back(curve1X);

    curve1X.clearPoints();
    curve1X.addPoint(Point(190+thickness_, 150));
    curve1X.addPoint(Point(250, 250-thickness_));
    curves.push_back(curve1X);

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
    curve1Y.addPoint(Point(250, 250+thickness_));
    curves.push_back(curve1Y);

    // Middle Left
    curve1Y.clearPoints();
    curve1Y.addPoint(Point(250-thickness_/2, 250));
    curve1Y.addPoint(Point(190, 350));
    curves.push_back(curve1Y);

    curve1Y.clearPoints();
    curve1Y.addPoint(Point(190+thickness_, 350));
    curve1Y.addPoint(Point(250, 250+thickness_));
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































