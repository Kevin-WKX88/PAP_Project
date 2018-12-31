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

    Point P(1, 2,255);
    std::cout << P << std::endl;

    char fileName[] = "img.png";
    Image img(fileName, 5000, 5000);


   //  // draw Point
   //  Point P7(1, 1);
   //  img.draw(P7); 

   //  // draw curve
   //  Point P10(1, 1);
   //  //Point P11(2, 2);
   //  Point P12(2500, 4999);

   //  std::vector<Point> points;
   //  points.push_back(P10);
   //  //points.push_back(P11);
   //  points.push_back(P12);

   //  BezierCurve C1(points);
   //  img.draw(C1.getCurvePoints());

   //  img.writeImage();


     int thickness = 20;

   //  // 1.D
   //  char fileName1D[] = "FontV1_D.png";
   //  Image img1D(fileName1D, 5000, 5000);
   //  BezierCurve curve1D;

   //  curve1D.addPoint(Point(2000, 1500));
   //  curve1D.addPoint(Point(2000, 3500));
   //  img1D.draw(curve1D.getCurvePoints());

   //  curve1D.clearPoints();
   //  curve1D.addPoint(Point(2000+thickness, 1500+thickness));
   //  curve1D.addPoint(Point(2000+thickness, 3500-thickness));
   //  img1D.draw(curve1D.getCurvePoints());

   //  // With One curve
  	// // pointsD.clear();
   // //  pointsD.push_back(Point(1000, 1500));
   // //  pointsD.push_back(Point(2500, 1500));
   // //  pointsD.push_back(Point(2500, 3500));
   // //  pointsD.push_back(Point(1000, 3500));
   // //  BezierCurve curve1D2(pointsD);
   // //  img1D.draw(curve1D2.getCurvePoints());

   //  // With 2 quadratic curve
   //  curve1D.clearPoints();
   //  curve1D.addPoint(Point(1999, 1500));
   //  curve1D.addPoint(Point(3500, 1500));
   //  curve1D.addPoint(Point(3500, 2500));
   //  img1D.draw(curve1D.getCurvePoints());

   //  curve1D.clearPoints();
   //  curve1D.addPoint(Point(3500, 2500));
   //  curve1D.addPoint(Point(3500, 3500));
   //  curve1D.addPoint(Point(2000, 3500));
   //  img1D.draw(curve1D.getCurvePoints());

   //  curve1D.clearPoints();
   //  curve1D.addPoint(Point(2000+thickness, 1500+thickness));
   //  curve1D.addPoint(Point(3500-thickness, 1500+thickness));
   //  curve1D.addPoint(Point(3500-thickness, 2500));
   //  img1D.draw(curve1D.getCurvePoints());

   //  curve1D.clearPoints();
   //  curve1D.addPoint(Point(3500-thickness, 2500));
   //  curve1D.addPoint(Point(3500-thickness, 3500-thickness));
   //  curve1D.addPoint(Point(2000+thickness, 3500-thickness));
   //  img1D.draw(curve1D.getCurvePoints());

   //  img1D.writeImage();


    thickness = 10;
    // // 2.D
    double size = 0.1;
    char fileName2D[] = "FontV2_D.png";
    Image img2D(fileName2D, 5000*size, 5000*size);
    BezierCurve curve2D;

    curve2D.addPoint(Point(2000*size, 1500*size));
    curve2D.addPoint(Point(2000*size, 3500*size));
    img2D.draw(curve2D.getCurvePoints());

    for (int i = 0; i <= thickness; i++) {
    	curve2D.clearPoints();
	    curve2D.addPoint(Point(2000*size+i, 1500*size+i));
	    curve2D.addPoint(Point(2000*size+i, 3500*size-i));
	    img2D.draw(curve2D.getCurvePoints());

	    curve2D.clearPoints();
	    curve2D.addPoint(Point(2000*size +i, 1500*size +i));
	    curve2D.addPoint(Point(3500*size -i, 1500*size +i));
	    curve2D.addPoint(Point(3500*size -i, 2500*size));
	    img2D.draw(curve2D.getCurvePoints());

	    curve2D.clearPoints();
	    curve2D.addPoint(Point(3500*size-i, 2500*size));
	    curve2D.addPoint(Point(3500*size-i, 3500*size-i));
	    curve2D.addPoint(Point(2000*size+i, 3500*size-i));
	    img2D.draw(curve2D.getCurvePoints());
    }

    img2D.writeImage();

    //3.D
 //    size = 0.1;
 //    char fileName3D[] = "FontV3_D.png";
 //    Image img3D(fileName3D, 5000*size, 5000*size);
 //    BezierCurve curve3D;

 //    for (int i = 1; i < 3; i++) {
 //    	curve3D.clearPoints();
	// 	curve3D.addPoint(Point(2000*size-i, 1500*size-2, 255));
	// 	curve3D.addPoint(Point(2000*size-i, 3500*size+2, 255));
	// 	img3D.draw(curve3D.getCurvePoints());
 //    }

	// curve3D.clearPoints();
 //    curve3D.addPoint(Point(2000*size, 1500*size));
 //    curve3D.addPoint(Point(2000*size, 3500*size));
 //    img3D.draw(curve3D.getCurvePoints());

 //    for (int i = 1; i < 3; i++) {

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size+i, 1500*size+i));
	//     curve3D.addPoint(Point(3500*size-i, 1500*size+i));
	//     curve3D.addPoint(Point(3500*size-i, 2500*size));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(3500*size-i, 2500*size));
	//     curve3D.addPoint(Point(3500*size-i, 3500*size-i));
	//     curve3D.addPoint(Point(2000*size+i, 3500*size-i));
	//     img3D.draw(curve3D.getCurvePoints());
 //    }

 //    for (int i = 0; i <= thickness; i++) {
 //    	curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size+i, 1500*size));
	//     curve3D.addPoint(Point(2000*size+i, 3500*size));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size+i, 1500*size+i));
	//     curve3D.addPoint(Point(3500*size-i, 1500*size+i));
	//     curve3D.addPoint(Point(3500*size-i, 2500*size));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(3500*size-i, 2500*size));
	//     curve3D.addPoint(Point(3500*size-i, 3500*size-i));
	//     curve3D.addPoint(Point(2000*size+i, 3500*size-i));
	//     img3D.draw(curve3D.getCurvePoints());
 //    }

 //    img3D.writeImage();


    return 0;
}
