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
    Image img(fileName, 10000, 10000);

    // Modif pixels
	png_bytep* pixels = img.getPixels();
	for(int y = 0; y < 10000; y++) {
	    png_bytep row = pixels[y];
	    for(int x = 0; x < 1000; x++) {
			png_bytep px = &(row[x * 3]);
			px[0] = 0;
			px[1] = 255;
			px[2] = 0;
	    }
  	}


  	// Test Creation of Line 
    Point P1(1000, 0);
    Point P2(1000, 2000);
  	Line L1(P1, P2);

    std::cout << L1 << std::endl;

  	//img.setPixels(pixels);
    img.writeImage();
    return 0;
}
