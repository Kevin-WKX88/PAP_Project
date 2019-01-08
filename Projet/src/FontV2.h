/*!
 * \file FontV2.h
 * \brief Class FontV2
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
#ifndef FONTV2_H_
#define FONTV2_H_

#include <vector>
#include <cmath>

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"
#include "FontV1.h"

class FontV2 : public FontV1{
	public:
		/**
		 * @brief Default constructor
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
		 * @return letter_
		 */
		void A();

		/**
		 * @brief Draw the letter B in black on the Image
		 * @return letter_
		 */
		void B();

		/**
		 * @brief Draw the letter C in black on the Image
		 * @return letter_
		 */
		void C();

		/**
		 * @brief Draw the letter D in black on the Image
		 * @return letter_
		 */
		void D();

		/**
		 * @brief Draw the letter E in black on the Image
		 * @return letter_
		 */
		void E();

		/**
		 * @brief Draw the letter F in black on the Image
		 * @return letter_
		 */
		void F();

		/**
		 * @brief Draw the letter G in black on the Image
		 * @return letter_
		 */
		void G();

		/**
		 * @brief Draw the letter M in black on the Image
		 * @return letter_
		 */
		void M();

		/**
		 * @brief Draw the letter N in black on the Image
		 * @return letter_
		 */
		void N();

		/**
		 * @brief Draw the letter O in black on the Image
		 * @return letter_
		 */
		void O();

		/**
		 * @brief Draw the letter Q in black on the Image
		 * @return letter_
		 */
		void Q();

		/**
		 * @brief Draw the letter S in black on the Image
		 * @return letter_
		 */
		void S();

		/**
		 * @brief Draw the letter U in black on the Image
		 * @return letter_
		 */
		void U();

		/**
		 * @brief Draw the letter V in black on the Image
		 * @return letter_
		 */
		void V();

		/**
		 * @brief Draw the letter W in black on the Image
		 * @return letter_
		 */
		void W();

		/**
		 * @brief Draw the letter Y in black on the Image
		 * @return letter_
		 */
		void Y();

		/**
		 * @brief Draw the letter Z in black on the Image
		 * @return letter_
		 */
		void Z();
};


#endif /* FONTV2_H_ */

