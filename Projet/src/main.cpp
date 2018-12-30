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

//using namespace std;

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
    Point P2(2500, 4500);
  	Line L1(P1, P2);
    std::cout << L1 << std::endl;
    img.drawStraightLine(L1);

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




  	//img.setPixels(pixels);
    img.writeImage();
    return 0;
}
