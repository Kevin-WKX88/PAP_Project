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

using namespace std;

int main() {
    cout << "!!!Hello World!!!" << endl;

    Point P(1, 2);
    cout << P << endl;

    char fileName[] = "img.png";
    Image img(fileName, 10000, 10000);

    img.writeImage();
    return 0;
}
