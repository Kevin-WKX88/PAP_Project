#include <iostream>

#include "Point.h"
#include "Image.h"
#include "Line.h"
#include "BezierCurve.h"
#include "FontV1.h"
#include "FontV2.h"

#include <vector>


void seedFill(Image &img, int x, int y){
	if ((x <= 100 || x >= 400) || (y <= 100 || y >= 400)) {
		return;
	}
	unsigned int* color = img.getPixelColor(Point(x,y));
	if (color[0] == 255 && color[1] == 255 && color[2] == 255) {
		std::cout << "true" << std::endl;
		img.draw(Point(x, y, 0, 0, 0));

		seedFill(img, x+1, y);
		seedFill(img, x-1, y);
		seedFill(img, x, y+1);
		seedFill(img, x, y-1);
	}
}

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


     // int thickness = 20;

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


    // // 2.D
    // double size = 0.1;
    // thickness = 200*size;

    // char fileName2D[] = "FontV2_D.png";
    // int width = 5000*size;
    // int height = width;
    // Image img2D(fileName2D, width, height);
    // BezierCurve curve2D;

    // curve2D.addPoint(Point(2000*size, 1500*size));
    // curve2D.addPoint(Point(2000*size, 3500*size));
    // std::vector<Point> gauche = curve2D.getCurvePoints();

    // for (int i = 0; i <= thickness; i++) {
    // 	for (auto it = gauche.begin(); it != gauche.end(); it++) {
    // 		img2D.draw(Point(it->getX()+i, it->getY()));
    // 	}

    // 	// curve2D.clearPoints();
	   //  // curve2D.addPoint(Point(2000*size+i, 1500*size+i));
	   //  // curve2D.addPoint(Point(2000*size+i, 3500*size-i));
	   //  // img2D.draw(curve2D.getCurvePoints());

	   //  curve2D.clearPoints();
	   //  curve2D.addPoint(Point(2000*size +i, 1500*size +i));
	   //  curve2D.addPoint(Point(3500*size -i, 1500*size +i));
	   //  curve2D.addPoint(Point(3500*size -i, 2500*size));
	   //  img2D.draw(curve2D.getCurvePoints());

	   //  curve2D.clearPoints();
	   //  curve2D.addPoint(Point(3500*size-i, 2500*size));
	   //  curve2D.addPoint(Point(3500*size-i, 3500*size-i));
	   //  curve2D.addPoint(Point(2000*size+i, 3500*size-i));
	   //  img2D.draw(curve2D.getCurvePoints());
    // }

    // img2D.writeImage();

    //3.D
 //    size = 0.02;
 //    thickness = 5;
 //    char fileName3D[] = "FontV3_D.png";
 //    Image img3D(fileName3D, 5000*size, 5000*size);
 //    BezierCurve curve3D;

	// curve3D.clearPoints();
 //    curve3D.addPoint(Point(2000*size, 1500*size));
 //    curve3D.addPoint(Point(2000*size, 3500*size));
 //    img3D.draw(curve3D.getCurvePoints());

 //    for (int i = 1; i < 3; i++) {
 //    	// Extérieur gauche
 //    	curve3D.clearPoints();
	// 	curve3D.addPoint(Point(2000*size-i, 1500*size-2, 255));
	// 	curve3D.addPoint(Point(2000*size-i, 3500*size+2, 255));
	// 	img3D.draw(curve3D.getCurvePoints());

	// 	// Intérieur gauche
	// 	curve3D.clearPoints();
	// 	curve3D.addPoint(Point(2000*size+thickness+i, 1500*size+thickness-2, 255));
	// 	curve3D.addPoint(Point(2000*size+thickness+i, 3500*size-thickness+2, 255));
	// 	img3D.draw(curve3D.getCurvePoints());

 //    	// Extérieur
	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size-i, 1500*size-i, 255));
	//     curve3D.addPoint(Point(3500*size+i, 1500*size-i, 255));
	//     curve3D.addPoint(Point(3500*size+i, 2500*size, 255));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(3500*size+i, 2500*size, 255));
	//     curve3D.addPoint(Point(3500*size+i, 3500*size+i, 255));
	//     curve3D.addPoint(Point(2000*size-i, 3500*size+i, 255));
	//     img3D.draw(curve3D.getCurvePoints());

	//     // Intérieur
	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size+thickness+i, 1500*size+thickness+i, 255));
	//     curve3D.addPoint(Point(3500*size-thickness-i, 1500*size+thickness+i, 255));
	//     curve3D.addPoint(Point(3500*size-thickness-i, 2500*size, 255));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(3500*size-thickness-i, 2500*size, 255));
	//     curve3D.addPoint(Point(3500*size-thickness-i, 3500*size-thickness-i, 255));
	//     curve3D.addPoint(Point(2000*size+thickness+i, 3500*size-thickness-i, 255));
	//     img3D.draw(curve3D.getCurvePoints());
 //    }

 //    for (int i = 0; i <= thickness; i++) {
 //    	curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size+i, 1500*size+i));
	//     curve3D.addPoint(Point(2000*size+i, 3500*size-i));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(2000*size +i, 1500*size +i));
	//     curve3D.addPoint(Point(3500*size -i, 1500*size +i));
	//     curve3D.addPoint(Point(3500*size -i, 2500*size));
	//     img3D.draw(curve3D.getCurvePoints());

	//     curve3D.clearPoints();
	//     curve3D.addPoint(Point(3500*size-i, 2500*size));
	//     curve3D.addPoint(Point(3500*size-i, 3500*size-i));
	//     curve3D.addPoint(Point(2000*size+i, 3500*size-i));
	//     img3D.draw(curve3D.getCurvePoints());
 //    }

    //img3D.writeImage();



	// 1.Z
 //    size = 0.1;
 //    thickness = 100*size;

 //    char fileName1Z[] = "FontV1_Z.png";
 //    Image img1Z(fileName1Z, 5000*size, 5000*size);
 //    BezierCurve curve1Z;

 //    // Bas
	// curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 1500*size));
 //    curve1Z.addPoint(Point(3100*size, 1500*size));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size+thickness, 1500*size+thickness));
 //    curve1Z.addPoint(Point(3100*size, 1500*size+thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    // Haut
 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 3500*size));
 //    curve1Z.addPoint(Point(3100*size, 3500*size));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 3500*size-thickness));
 //    curve1Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    // Diagonale
 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size+thickness, 1500*size+thickness));
 //    curve1Z.addPoint(Point(3100*size, 3500*size-thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

	// curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 1500*size+thickness));
 //    curve1Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    // Bord haut
 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 3500*size));
 //    curve1Z.addPoint(Point(1900*size, 3500*size-thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(3100*size, 3500*size));
 //    curve1Z.addPoint(Point(3100*size, 3500*size-thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    // Bord bas
 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(1900*size, 1500*size));
 //    curve1Z.addPoint(Point(1900*size, 1500*size+thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    curve1Z.clearPoints();
 //    curve1Z.addPoint(Point(3100*size, 1500*size));
 //    curve1Z.addPoint(Point(3100*size, 1500*size+thickness));
 //    img1Z.draw(curve1Z.getCurvePoints());

 //    img1Z.writeImage();



    // 2.Z
 //    double size = 0.5;
 //    thickness = 100*size;

 //    char fileName2Z[] = "FontV2_Z.png";
 //    Image img2Z(fileName2Z, 5000*size, 5000*size);
 //    BezierCurve curve2Z;

	// // Bas
 //    curve2Z.clearPoints();
	// curve2Z.addPoint(Point(1900*size, 1500*size));
	// curve2Z.addPoint(Point(3100*size, 1500*size));
	// std::vector<Point> bas = curve2Z.getCurvePoints();

	// // Haut
	// curve2Z.clearPoints();
 //    curve2Z.addPoint(Point(1900*size, 3500*size));
 //    curve2Z.addPoint(Point(3100*size, 3500*size));
	// std::vector<Point> haut = curve2Z.getCurvePoints();

	// // Diagonale
 //    curve2Z.clearPoints();
 //    curve2Z.addPoint(Point(1900*size, 1500*size+thickness));
 //    curve2Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
 //    std::vector<Point> diag = curve2Z.getCurvePoints();

 //    for (int i = 0; i <= thickness; i++) {
 //    	for (auto it = bas.begin(); it != bas.end(); it++) {
 //    		img2Z.draw(Point(it->getX(), it->getY()+i));
 //    	}

 //    	for (auto it = haut.begin(); it != haut.end(); it++) {
 //    		img2Z.draw(Point(it->getX(), it->getY()-i));
 //    	}

 //    	for (auto it = diag.begin(); it != diag.end(); it++) {
 //    		img2Z.draw(Point(it->getX()+i, it->getY()));
 //    	}
 //    }
 //    img2Z.writeImage();

    // 3.Z
  //   size = 0.5;
  //   thickness = 200*size;

  //   char fileName3Z[] = "FontV3_Z.png";
  //   Image img3Z(fileName3Z, 5000*size, 5000*size);
  //   BezierCurve curve3Z;

    // Bas
 //    curve3Z.clearPoints();
	// curve3Z.addPoint(Point(1900*size, 1500*size));
	// curve3Z.addPoint(Point(3100*size, 1500*size));
	// std::vector<Point> bas = curve3Z.getCurvePoints();

	// // Haut
	// curve3Z.clearPoints();
 //    curve3Z.addPoint(Point(1900*size, 3500*size));
 //    curve3Z.addPoint(Point(3100*size, 3500*size));
	// std::vector<Point> haut = curve3Z.getCurvePoints();

	// // Diagonale
 //    curve3Z.clearPoints();
 //    curve3Z.addPoint(Point(1900*size, 1500*size+thickness));
 //    curve3Z.addPoint(Point(3100*size-thickness, 3500*size-thickness));
 //    std::vector<Point> diag = curve3Z.getCurvePoints();

 //    for (int i = 0; i <= thickness; i++) {
 //    	for (auto it = bas.begin(); it != bas.end(); it++) {
 //    		img3Z.draw(Point(it->getX(), it->getY()+i));
 //    	}

 //    	for (auto it = haut.begin(); it != haut.end(); it++) {
 //    		img3Z.draw(Point(it->getX(), it->getY()-i));
 //    	}

 //    	for (auto it = diag.begin(); it != diag.end(); it++) {
 //    		img3Z.draw(Point(it->getX()+i, it->getY()));
 //    	}
 //    }


  //   for (int i = 1; i < 3; i++) {
  //   	// Bas
  //   	curve3Z.clearPoints();
		// curve3Z.addPoint(Point(1900*size, 1500*size-i, 255));
		// curve3Z.addPoint(Point(3100*size, 1500*size-i, 255));
		// img3Z.draw(curve3Z.getCurvePoints());

		// curve3Z.clearPoints();
		// curve3Z.addPoint(Point(1900*size+thickness+2, 1500*size+thickness+i, 255));
		// curve3Z.addPoint(Point(3100*size, 1500*size+thickness+i, 255));
		// img3Z.draw(curve3Z.getCurvePoints());

		// // Bas gauche
		// curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size-i, 1500*size-2, 255));
	 //    curve3Z.addPoint(Point(1900*size-i, 1500*size+thickness+2, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    // Bas droit
		// curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(3100*size+i, 1500*size-2, 255));
	 //    curve3Z.addPoint(Point(3100*size+i, 1500*size+thickness+2, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

		// // Haut
		// curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size, 3500*size+i, 255));
	 //    curve3Z.addPoint(Point(3100*size, 3500*size+i, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size, 3500*size-thickness-i, 255));
	 //    curve3Z.addPoint(Point(3100*size-thickness-2, 3500*size-thickness-i, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    // Haut gauche
		// curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size-i, 3500*size+2, 255));
	 //    curve3Z.addPoint(Point(1900*size-i, 3500*size-thickness-2, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    // Haut droit
		// curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(3100*size+i, 3500*size+2, 255));
	 //    curve3Z.addPoint(Point(3100*size+i, 3500*size-thickness-2, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    // Diagonale
	 //    curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size-i, 1500*size+thickness+1, 255));
	 //    curve3Z.addPoint(Point(3100*size-thickness-i, 3500*size-thickness-1, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());

	 //    curve3Z.clearPoints();
	 //    curve3Z.addPoint(Point(1900*size+thickness+i, 1500*size+thickness+1, 255));
	 //    curve3Z.addPoint(Point(3100*size+i, 3500*size-thickness-1, 255));
	 //    img3Z.draw(curve3Z.getCurvePoints());
  //   }
  //   img3Z.writeImage();

 //    FontV1 LZ;
 //    double size = 0.5;
 //    char fileName1Z[] = "FontV1_Z.png";
 //    Image img1Z(fileName1Z, 5000*size, 5000*size);

 //    img1Z.draw(LZ.Z(size, 200*size));

	// img1Z.writeImage();



 //    // 1.O
	// FontV1 LO;
 //    double size = 0.1;
 //    char fileName1O[] = "FontV1_O.png";
 //    Image img1O(fileName1O, 5000*size, 5000*size);

 //    img1O.draw(LO.O());

	// img1O.writeImage();



	// // 1.D
	// FontV1 LD;
    // double size = 0.1;
    // char fileName1D[] = "FontV1_D.png";
    // Image img1D(fileName1D, 5000*size, 5000*size);
    // img1D.draw(LD.D(size, 200*size));
	// img1D.writeImage();

	// 2.D
	// FontV2 LD;
 //    char fileName2D[] = "FontV2_D.png";
 //    Image img2D(fileName2D, 500, 500);
 //    img2D.draw(LD.D());
	// img2D.writeImage();


 //    // 1.A
	// FontV1 LA;
 //    char fileName1A[] = "FontV1_A.png";
 //    Image img1A(fileName1A, 500, 500);
 //    img1A.draw(LA.A());
	// img1A.writeImage();


  // 1.B
	// FontV1 LB;
 //    char fileName1B[] = "FontV1_B.png";
 //    Image img1B(fileName1B, 500, 500);
 //    img1B.draw(LB.B());
	// img1B.writeImage();


	// 1.S
	// FontV1 LS;
 //    char fileName1S[] = "FontV1_S.png";
 //    Image img1S(fileName1S, 500, 500);
 //    img1S.draw(LS.S());
	// img1S.writeImage();


	// 1.G
	// FontV1 LG;
 //    char fileName1G[] = "FontV1_G.png";
 //    Image img1G(fileName1G, 500, 500);
 //    img1G.draw(LG.G());
	// seedFill(img1G, 250, 160);

	// img1G.writeImage();

	// 1.C
	// FontV1 LC;
 //    char fileName1C[] = "FontV1_C.png";
 //    Image img1C(fileName1C, 500, 500);
 //    img1C.draw(LC.C());
	// img1C.writeImage();

	// 2.C
	// FontV2 LC;
 //    char fileName2C[] = "FontV2_C.png";
 //    Image img2C(fileName2C, 500, 500);
 //    img2C.draw(LC.C());


	// seedFill(img2C, 250, 160);
	
	// img2C.writeImage();



 //  // 1.S
	// FontV1 LS;
 //    char fileName1S[] = "FontV1_S.png";
 //    Image img1S(fileName1S, 500, 500);
 //    img1S.draw(LS.S());
	// img1S.writeImage();


 //  // 1.E
    //char fileName1E[] = "FontV1_E.png";
    //FontV1 LE(fileName1E);
    //LE.E();
    //LE.finishLetter();

    //Image img1E(fileName1E, 500, 500);
    //img1E.draw(LE.E());
	//img1E.writeImage();


 // //  // 1.F
 //    FontV1 LF;
 //    char fileName1F[] = "FontV1_F.png";
 //    Image img1F(fileName1F, 500, 500);
 //    img1F.draw(LF.F());
 //    img1F.writeImage();




    // FONTV1
    // char fileName1Y[] = "FontV1_Y.png";
    // FontV1 L1Y(fileName1Y);
    // L1Y.Y();
    // L1Y.finishLetter();



    // FONTV2
    // char fileName2B[] = "FontV2_B.png";
    // FontV2 L2B(fileName2B);
    // L2B.B();
    // L2B.finishLetter();

    // char fileName2C[] = "FontV2_C.png";
    // FontV2 L2C(fileName2C);
    // L2C.C();
    // L2C.finishLetter();

    // char fileName2D[] = "FontV2_D.png";
    // FontV2 L2D(fileName2D);
    // L2D.D();
    // L2D.finishLetter();

    // char fileName2O[] = "FontV2_O.png";
    // FontV2 L2O(fileName2O);
    // L2O.O();
    // L2O.finishLetter();

    char fileName2S[] = "FontV2_S.png";
    FontV2 L2S(fileName2S);
    L2S.S();
    L2S.finishLetter();

    // char fileName2Y[] = "FontV2_Y.png";
    // FontV2 L2Y(fileName2Y);
    // L2Y.Y();
    // L2Y.finishLetter();

    // char fileName2Z[] = "FontV2_Z.png";
    // FontV2 L2Z(fileName2Z);
    // L2Z.Z();
    // L2Z.finishLetter();

    return 0;
}









