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

#include <vector>
#include <cmath>

Point getCJPoint(int r, int index, double t, std::vector<Point> points) {
	if (r == 0) return points[index];
	Point P1 = getCJPoint(r-1, index, t, points);
	Point P2 = getCJPoint(r-1, index+1, t, points);
	return Point(round((1-t) * P1.getX() + t * P2.getX()), round((1-t) * P1.getY() + t * P2.getY()));
}

std::vector<Point> drawCJ(std::vector<Point> points) {
	std::vector<Point> res;
	for (double t = 0.0; t <= 1; t+=0.00001) {
		Point P = getCJPoint(points.size() - 1, 0, t, points);
		res.push_back(P);
	}
	return res;
}


Point CJquadratic(Point P1, Point P2, Point P3) {

}


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


  	// Test horizontal line 
    Point P1(2500, 10);
    Point P2(2500, 4999);
  	// Line L1(P1, P2);
   //  std::cout << L1 << std::endl;
   //  img.drawStraightLine(L1);

  	// Test horizontal line 
    Point P3(5, 4500);
    Point P4(5000, 4500);
  	Line L2(P3, P4);
    std::cout << L2 << std::endl;
    img.drawStraightLine(L2);

    Point P5(5, 3000);
    Point P6(5000, 4500);
  	Line L3(P5, P6);
    std::cout << L3 << std::endl;
    img.draw(L3);


    // draw Point
    Point P7(1, 1);
    img.draw(P7); 

    // draw curve
    Point P10(1, 2500);
    Point P11(1400, 1000);
    Point P12(2500, 2600);
    Point P13(4888, 500);

    std::vector<Point> points;
    points.push_back(P10);
    points.push_back(P11);
    points.push_back(P12);

    std::vector<Point> result = drawCJ(points);
    for (std::vector<Point>::iterator it = result.begin(); it != result.end(); it++) {
    	img.draw(*it);
    }


    std::vector<Point> points2;
    points2.push_back(P1);
    points2.push_back(P2);

    std::vector<Point> result2 = drawCJ(points2);
    for (std::vector<Point>::iterator it = result2.begin(); it != result2.end(); it++) {
    	img.draw(*it);
    }

  	//img.setPixels(pixels);
    img.writeImage();
    return 0;
}
