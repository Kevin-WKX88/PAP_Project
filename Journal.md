# 29/12

## Class Line
 + unsigned int for color ?
 + int thickness : int ou truc positif
 + draw ?

**TODO**
 + Copy constructor

## Class Image
### Methods
 + setPixels : pb de pointeur, référence ... PAS besoin get suffit
 + getPixels
 
 + Draw(Line)
	 - Compliquer ... tracer une line à partir de deux point
	 - problème de précision -> arrondir au plus près
	 - faire avec les distance ? euclienne comme pour labyrinthe -> marche pas encore
	 - Double conditions : distance de manathan ET utilisation du coefficient direction -> NON marche pas encore
	 - faire une discrétisation de la distance puis ++de x lorsque la distance est très proche d'un multiple du pas -> Semble marché
	 	rester au mileu, pas aller vers les bords

	 - Attention lorsqu'on trace selon les x ou y ?
	 - 


 + Draw(Curve) 
	Test out of bounds

## Class Point
+ Dist(Point)

## Class Color ?

# Problems
 + Taille des méthodes : Image.cpp