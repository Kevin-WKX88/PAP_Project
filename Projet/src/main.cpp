//============================================================================
// Name        : Projet_PAP.cpp
// Author      : Kevin XU & Ziheng LI
// Version     :
// Copyright   : Your copyright notice
// Description : PAP Project - Courbes de Bézier et police de caractères
//============================================================================

#include <iostream>

#include "Point.h"
#include "Image.h"
#include "Line.h"
#include "BezierCurve.h"

#include <vector>

int main() {
    std::cout << "!!!Hello World!!!" << std::endl;

    Point P(1, 2);
    std::cout << P << std::endl;

    char fileName[] = "img.png";
    Image img(fileName, 5000, 5000);

    // Modif pixels
	// png_bytep* pixels = img.getPixels();
	// for(int y = 0; y < 10000; y++) {
	//     png_bytep row = pixels[y];
	//     for(int x = 0; x < 1000; x++) {
	// 		png_bytep px = &(row[x * 3]);
	// 		px[0] = 0;
	// 		px[1] = 255;
	// 		px[2] = 0;
	//     }
 //  	}



    // draw Point
    Point P7(1, 1);
    img.draw(P7); 

    // draw curve
    Point P10(1, 1);
    //Point P11(2, 2);
    Point P12(2500, 4999);

    std::vector<Point> points;
    points.push_back(P10);
    //points.push_back(P11);
    points.push_back(P12);

    BezierCurve C1(points);
    img.draw(C1.getCurvePoints());

    img.writeImage();


    int thickness = 300;
    // 1.D
    char fileName1D[] = "1.D.png";
    Image img1D(fileName1D, 5000, 5000);

	std::vector<Point> pointsD;
    pointsD.push_back(Point(2000, 1500));
    pointsD.push_back(Point(2000, 3500));
    BezierCurve curve1D(pointsD);
    img1D.draw(curve1D.getCurvePoints());

    pointsD.clear();
    pointsD.push_back(Point(2000+thickness, 1500+thickness));
    pointsD.push_back(Point(2000+thickness, 3500-thickness));
    BezierCurve curve1D2(pointsD);
    img1D.draw(curve1D2.getCurvePoints());

    // With One curve
  	// pointsD.clear();
   //  pointsD.push_back(Point(1000, 1500));
   //  pointsD.push_back(Point(2500, 1500));
   //  pointsD.push_back(Point(2500, 3500));
   //  pointsD.push_back(Point(1000, 3500));
   //  BezierCurve curve1D2(pointsD);
   //  img1D.draw(curve1D2.getCurvePoints());

    // With 2 quadratic curve
    pointsD.clear();
    pointsD.push_back(Point(1999, 1500));
    pointsD.push_back(Point(3500, 1500));
    pointsD.push_back(Point(3500, 2500));
    BezierCurve curve1D4(pointsD);
    img1D.draw(curve1D4.getCurvePoints());

	pointsD.clear();
    pointsD.push_back(Point(3500, 2500));
    pointsD.push_back(Point(3500, 3500));
    pointsD.push_back(Point(2000, 3500));
    BezierCurve curve1D5(pointsD);
    img1D.draw(curve1D5.getCurvePoints());

    pointsD.clear();
    pointsD.push_back(Point(2000+thickness, 1500+thickness));
    pointsD.push_back(Point(3500-thickness, 1500+thickness));
    pointsD.push_back(Point(3500-thickness, 2500));
    BezierCurve curve1D6(pointsD);
    img1D.draw(curve1D6.getCurvePoints());

	pointsD.clear();
    pointsD.push_back(Point(3500-thickness, 2500));
    pointsD.push_back(Point(3500-thickness, 3500-thickness));
    pointsD.push_back(Point(2000+thickness, 3500-thickness));
    BezierCurve curve1D7(pointsD);
    img1D.draw(curve1D7.getCurvePoints());

    img1D.writeImage();




    return 0;
}
