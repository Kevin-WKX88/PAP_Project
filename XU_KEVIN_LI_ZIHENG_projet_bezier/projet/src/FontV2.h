/*!
 * \file FontV2.h
 * \brief Class FontV2
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */

#ifndef FONTV2_H_
#define FONTV2_H_

#include <cmath>

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"
#include "FontV1.h"

class FontV2 : public FontV1{
	public:
		/**
		 * @brief Valued constructor
		 * @param imageName The name of the image
		 */
		FontV2(char* imageName) : FontV1(imageName) {}
		
		/**
		 * @brief Color the inside of a letter
		 * @details Perform Seed fill Algorithm to transform the white pixel inside the contour into black pixel
		 * @param x coordinate 
		 * @param y coordinate
		 */
		void colorInBlack(int x, int y);

		/**
		 * @brief Draw the letter A in black on the Image
		 */
		void A();

		/**
		 * @brief Draw the letter B in black on the Image
		 */
		void B();

		/**
		 * @brief Draw the letter C in black on the Image
		 */
		void C();

		/**
		 * @brief Draw the letter D in black on the Image
		 */
		void D();

		/**
		 * @brief Draw the letter E in black on the Image
		 */
		void E();

		/**
		 * @brief Draw the letter F in black on the Image
		 */
		void F();

		/**
		 * @brief Draw the letter G in black on the Image
		 */
		void G();

		/**
		 * @brief Draw the letter H in black on the Image
		 */
		void H();

		/**
		 * @brief Draw the letter I in black on the Image
		 */
		void I();

		/**
		 * @brief Draw the letter J in black on the Image
		 */
		void J();

		/**
		 * @brief Draw the letter K in black on the Image
		 */
		void K();

		/**
		 * @brief Draw the letter L in black on the Image
		 */
		void L();

		/**
		 * @brief Draw the letter M in black on the Image
		 */
		void M();

		/**
		 * @brief Draw the letter N in black on the Image
		 */
		void N();

		/**
		 * @brief Draw the letter O in black on the Image
		 */
		void O();

		/**
		 * @brief Draw the letter P in black on the Image
		 */
		void P();

		/**
		 * @brief Draw the letter Q in black on the Image
		 */
		void Q();

		/**
		 * @brief Draw the letter R in black on the Image
		 */
		void R();

		/**
		 * @brief Draw the letter S in black on the Image
		 */
		void S();

		/**
		 * @brief Draw the letter T in black on the Image
		 */
		void T();

		/**
		 * @brief Draw the letter U in black on the Image
		 */
		void U();

		/**
		 * @brief Draw the letter V in black on the Image
		 */
		void V();

		/**
		 * @brief Draw the letter W in black on the Image
		 */
		void W();

		/**
		 * @brief Draw the letter X in black on the Image
		 */
		void X();

		/**
		 * @brief Draw the letter Y in black on the Image
		 */
		void Y();

		/**
		 * @brief Draw the letter Z in black on the Image
		 */
		void Z();
};


#endif /* FONTV2_H_ */