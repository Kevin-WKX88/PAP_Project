#include <iostream>

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"
#include "FontV1.h"
#include "FontV2.h"
#include "FontV3.h"

#include <vector>

int main() {
    std::cout << "!!!Hello World!!!" << std::endl;

    // Point P(1, 2,255);
    // std::cout << P << std::endl;

    // char fileName[] = "img.png";
    // //Image img(fileName, 5000, 5000);


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
   //  char fileName1D[] = "./FontV1/FontV1_D.png";
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
    // char fileName1A[] = "./FontV1/FontV1_A.png";
    // FontV1 L1A(fileName1A);
    // L1A.A();
    // L1A.finishLetter();

    // char fileName1B[] = "./FontV1/FontV1_B.png";
    // FontV1 L1B(fileName1B);
    // L1B.B();
    // L1B.finishLetter();

    // char fileName1C[] = "./FontV1/FontV1_C.png";
    // FontV1 L1C(fileName1C);
    // L1C.C();
    // L1C.finishLetter();

    // char fileName1D[] = "./FontV1/FontV1_D.png";
    // FontV1 L1D(fileName1D);
    // L1D.D();
    // L1D.finishLetter();

    // char fileName1E[] = "./FontV1/FontV1_E.png";
    // FontV1 L1E(fileName1E);
    // L1E.E();
    // L1E.finishLetter();

    // char fileName1F[] = "./FontV1/FontV1_F.png";
    // FontV1 L1F(fileName1F);
    // L1F.F();
    // L1F.finishLetter();

    // char fileName1G[] = "./FontV1/FontV1_G.png";
    // FontV1 L1G(fileName1G);
    // L1G.G();
    // L1G.finishLetter();

    // char fileName1H[] = "./FontV1/FontV1_H.png";
    // FontV1 L1H(fileName1H);
    // L1H.H();
    // L1H.finishLetter();

    // char fileName1I[] = "./FontV1/FontV1_I.png";
    // FontV1 L1I(fileName1I);
    // L1I.I();
    // L1I.finishLetter();

    // char fileName1J[] = "./FontV1/FontV1_J.png";
    // FontV1 L1J(fileName1J);
    // L1J.J();
    // L1J.finishLetter();

    // char fileName1K[] = "./FontV1/FontV1_K.png";
    // FontV1 L1K(fileName1K);
    // L1K.K();
    // L1K.finishLetter();

    // char fileName1L[] = "./FontV1/FontV1_L.png";
    // FontV1 L1L(fileName1L);
    // L1L.L();
    // L1L.finishLetter();

    // char fileName1M[] = "./FontV1/FontV1_M.png";
    // FontV1 L1M(fileName1M);
    // L1M.M();
    // L1M.finishLetter();

    // char fileName1N[] = "./FontV1/FontV1_N.png";
    // FontV1 L1N(fileName1N);
    // L1N.N();
    // L1N.finishLetter();

    // char fileName1O[] = "./FontV1/FontV1_O.png";
    // FontV1 L1O(fileName1O);
    // L1O.O();
    // L1O.finishLetter();

    // char fileName1P[] = "./FontV1/FontV1_P.png";
    // FontV1 L1P(fileName1P);
    // L1P.P();
    // L1P.finishLetter();

    // char fileName1Q[] = "./FontV1/FontV1_Q.png";
    // FontV1 L1Q(fileName1Q);
    // L1Q.Q();
    // L1Q.finishLetter();

    // char fileName1R[] = "./FontV1/FontV1_R.png";
    // FontV1 L1R(fileName1R);
    // L1R.R();
    // L1R.finishLetter();

    char fileName1S[] = "./FontV1/FontV1_S.png";
    FontV1 L1S(fileName1S);
    L1S.S();
    L1S.finishLetter();

    // char fileName1T[] = "./FontV1/FontV1_T.png";
    // FontV1 L1T(fileName1T);
    // L1T.T();
    // L1T.finishLetter();

    // char fileName1U[] = "./FontV1/FontV1_U.png";
    // FontV1 L1U(fileName1U);
    // L1U.U();
    // L1U.finishLetter();

    // char fileName1V[] = "./FontV1/FontV1_V.png";
    // FontV1 L1V(fileName1V);
    // L1V.V();
    // L1V.finishLetter();

    // char fileName1W[] = "./FontV1/FontV1_W.png";
    // FontV1 L1W(fileName1W);
    // L1W.W();
    // L1W.finishLetter();

    // char fileName1X[] = "./FontV1/FontV1_X.png";
    // FontV1 L1X(fileName1X);
    // L1X.X();
    // L1X.finishLetter();

    // char fileName1Y[] = "./FontV1/FontV1_Y.png";
    // FontV1 L1Y(fileName1Y);
    // L1Y.Y();
    // L1Y.finishLetter();

    // char fileName1Z[] = "./FontV1/FontV1_Z.png";
    // FontV1 L1Z(fileName1Z);
    // L1Z.Z();
    // L1Z.finishLetter();



    // FONTV2
    // char fileName2A[] = "./FontV2/FontV2_A.png";
    // FontV2 L2A(fileName2A);
    // L2A.A();
    // L2A.finishLetter();

    // char fileName2B[] = "./FontV2/FontV2_B.png";
    // FontV2 L2B(fileName2B);
    // L2B.B();
    // L2B.finishLetter();

    // char fileName2C[] = "./FontV2/FontV2_C.png";
    // FontV2 L2C(fileName2C);
    // L2C.C();
    // L2C.finishLetter();

    // char fileName2D[] = "./FontV2/FontV2_D.png";
    // FontV2 L2D(fileName2D);
    // L2D.D();
    // L2D.finishLetter();

    // char fileName2E[] = "./FontV2/FontV2_E.png";
    // FontV2 L2E(fileName2E);
    // L2E.E();
    // L2E.finishLetter();

    // char fileName2F[] = "./FontV2/FontV2_F.png";
    // FontV2 L2F(fileName2F);
    // L2F.F();
    // L2F.finishLetter();

    // char fileName2G[] = "./FontV2/FontV2_G.png";
    // FontV2 L2G(fileName2G);
    // L2G.G();
    // L2G.finishLetter();

    // char fileName2H[] = "./FontV2/FontV2_H.png";
    // FontV2 L2H(fileName2H);
    // L2H.H();
    // L2H.finishLetter();

    // char fileName2I[] = "./FontV2/FontV2_I.png";
    // FontV2 L2I(fileName2I);
    // L2I.I();
    // L2I.finishLetter();

    // char fileName2J[] = "./FontV2/FontV2_J.png";
    // FontV2 L2J(fileName2J);
    // L2J.J();
    // L2J.finishLetter();

    // char fileName2K[] = "./FontV2/FontV2_K.png";
    // FontV2 L2K(fileName2K);
    // L2K.K();
    // L2K.finishLetter();

    // char fileName2L[] = "./FontV2/FontV2_L.png";
    // FontV2 L2L(fileName2L);
    // L2L.L();
    // L2L.finishLetter();

    // char fileName2M[] = "./FontV2/FontV2_M.png";
    // FontV2 L2M(fileName2M);
    // L2M.M();
    // L2M.finishLetter();

    // char fileName2N[] = "./FontV2/FontV2_N.png";
    // FontV2 L2N(fileName2N);
    // L2N.N();
    // L2N.finishLetter();

    // char fileName2O[] = "./FontV2/FontV2_O.png";
    // FontV2 L2O(fileName2O);
    // L2O.O();
    // L2O.finishLetter();

    // char fileName2P[] = "./FontV2/FontV2_P.png";
    // FontV2 L2P(fileName2P);
    // L2P.P();
    // L2P.finishLetter();

    // char fileName2Q[] = "./FontV2/FontV2_Q.png";
    // FontV2 L2Q(fileName2Q);
    // L2Q.Q();
    // L2Q.finishLetter();

    // char fileName2R[] = "./FontV2/FontV2_R.png";
    // FontV2 L2R(fileName2R);
    // L2R.R();
    // L2R.finishLetter();

    // char fileName2S[] = "./FontV2/FontV2_S.png";
    // FontV2 L2S(fileName2S);
    // L2S.S();
    // L2S.finishLetter();

    // char fileName2T[] = "./FontV2/FontV2_T.png";
    // FontV2 L2T(fileName2T);
    // L2T.T();
    // L2T.finishLetter();

    // char fileName2U[] = "./FontV2/FontV2_U.png";
    // FontV2 L2U(fileName2U);
    // L2U.U();
    // L2U.finishLetter();

    // char fileName2V[] = "./FontV2/FontV2_V.png";
    // FontV2 L2V(fileName2V);
    // L2V.V();
    // L2V.finishLetter();

    // char fileName2W[] = "./FontV2/FontV2_W.png";
    // FontV2 L2W(fileName2W);
    // L2W.W();
    // L2W.finishLetter();

    // char fileName2X[] = "./FontV2/FontV2_X.png";
    // FontV2 L2X(fileName2X);
    // L2X.X();
    // L2X.finishLetter();

    // char fileName2Y[] = "./FontV2/FontV2_Y.png";
    // FontV2 L2Y(fileName2Y);
    // L2Y.Y();
    // L2Y.finishLetter();

    // char fileName2Z[] = "./FontV2/FontV2_Z.png";
    // FontV2 L2Z(fileName2Z);
    // L2Z.Z();
    // L2Z.finishLetter();


    // FONTV3
	// char fileName3A[] = "./FontV3/FontV3_A.png";
 //    FontV3 L3A(fileName3A);
 //    L3A.A();
 //    L3A.finishLetter();

 //    char fileName3B[] = "./FontV3/FontV3_B.png";
 //    FontV3 L3B(fileName3B);
 //    L3B.B();
 //    L3B.finishLetter();

 //    char fileName3C[] = "./FontV3/FontV3_C.png";
 //    FontV3 L3C(fileName3C);
 //    L3C.C();
 //    L3C.finishLetter();

 //    char fileName3D[] = "./FontV3/FontV3_D.png";
 //    FontV3 L3D(fileName3D);
 //    L3D.D();
 //    L3D.finishLetter();

 //    char fileName3E[] = "./FontV3/FontV3_E.png";
 //    FontV3 L3E(fileName3E);
 //    L3E.E();
 //    L3E.finishLetter();

 //    char fileName3F[] = "./FontV3/FontV3_F.png";
 //    FontV3 L3F(fileName3F);
 //    L3F.F();
 //    L3F.finishLetter();

 //    char fileName3G[] = "./FontV3/FontV3_G.png";
 //    FontV3 L3G(fileName3G);
 //    L3G.G();
 //    L3G.finishLetter();

 //    char fileName3H[] = "./FontV3/FontV3_H.png";
 //    FontV3 L3H(fileName3H);
 //    L3H.H();
 //    L3H.finishLetter();

 //    char fileName3I[] = "./FontV3/FontV3_I.png";
 //    FontV3 L3I(fileName3I);
 //    L3I.I();
 //    L3I.finishLetter();

 //    char fileName3J[] = "./FontV3/FontV3_J.png";
 //    FontV3 L3J(fileName3J);
 //    L3J.J();
 //    L3J.finishLetter();

 //    char fileName3K[] = "./FontV3/FontV3_K.png";
 //    FontV3 L3K(fileName3K);
 //    L3K.K();
 //    L3K.finishLetter();

 //    char fileName3L[] = "./FontV3/FontV3_L.png";
 //    FontV3 L3L(fileName3L);
 //    L3L.L();
 //    L3L.finishLetter();

 //    char fileName3M[] = "./FontV3/FontV3_M.png";
 //    FontV3 L3M(fileName3M);
 //    L3M.M();
 //    L3M.finishLetter();

 //    char fileName3N[] = "./FontV3/FontV3_N.png";
 //    FontV3 L3N(fileName3N);
 //    L3N.N();
 //    L3N.finishLetter();

 //    char fileName3O[] = "./FontV3/FontV3_O.png";
 //    FontV3 L3O(fileName3O);
 //    L3O.O();
 //    L3O.finishLetter();

 //    char fileName3P[] = "./FontV3/FontV3_P.png";
 //    FontV3 L3P(fileName3P);
 //    L3P.P();
 //    L3P.finishLetter();

 //    char fileName3Q[] = "./FontV3/FontV3_Q.png";
 //    FontV3 L3Q(fileName3Q);
 //    L3Q.Q();
 //    L3Q.finishLetter();

 //    char fileName3R[] = "./FontV3/FontV3_R.png";
 //    FontV3 L3R(fileName3R);
 //    L3R.R();
 //    L3R.finishLetter();

 //    char fileName3S[] = "./FontV3/FontV3_S.png";
 //    FontV3 L3S(fileName3S);
 //    L3S.S();
 //    L3S.finishLetter();

 //    char fileName3T[] = "./FontV3/FontV3_T.png";
 //    FontV3 L3T(fileName3T);
 //    L3T.T();
 //    L3T.finishLetter();

 //    char fileName3U[] = "./FontV3/FontV3_U.png";
 //    FontV3 L3U(fileName3U);
 //    L3U.U();
 //    L3U.finishLetter();

 //    char fileName3V[] = "./FontV3/FontV3_V.png";
 //    FontV3 L3V(fileName3V);
 //    L3V.V();
 //    L3V.finishLetter();

 //    char fileName3W[] = "./FontV3/FontV3_W.png";
 //    FontV3 L3W(fileName3W);
 //    L3W.W();
 //    L3W.finishLetter();

 //    char fileName3X[] = "./FontV3/FontV3_X.png";
 //    FontV3 L3X(fileName3X);
 //    L3X.X();
 //    L3X.finishLetter();

 //    char fileName3Y[] = "./FontV3/FontV3_Y.png";
 //    FontV3 L3Y(fileName3Y);
 //    L3Y.Y();
 //    L3Y.finishLetter();

 //    char fileName3Z[] = "./FontV3/FontV3_Z.png";
 //    FontV3 L3Z(fileName3Z);
 //    L3Z.Z();
 //    L3Z.finishLetter();

    return 0;
}









