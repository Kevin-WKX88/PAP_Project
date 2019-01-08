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
		 * @brief The curves to draw the letter A
		 * @return letter_
		 */
		void A();

		/**
		 * @brief The curves to draw the letter B
		 * @return letter_
		 */
		void B();

		/**
		 * @brief The curves to draw the letter C
		 * @return letter_
		 */
		void C();

		/**
		 * @brief The curves to draw the letter D
		 * @return letter_
		 */
		void D();

		/**
		 * @brief The curves to draw the letter E
		 * @return letter_
		 */
		void E();

		/**
		 * @brief The curves to draw the letter F
		 * @return letter_
		 */
		void F();

		/**
		 * @brief The curves to draw the letter G
		 * @return letter_
		 */
		void G();

		/**
		 * @brief The curves to draw the letter M
		 * @return letter_
		 */
		void M();

		/**
		 * @brief The curves to draw the letter N
		 * @return letter_
		 */
		void N();

		/**
		 * @brief The curves to draw the letter O
		 * @return letter_
		 */
		void O();

		/**
		 * @brief The curves to draw the letter Q
		 * @return letter_
		 */
		void Q();

		/**
		 * @brief The curves to draw the letter S
		 * @return letter_
		 */
		void S();

		/**
		 * @brief The curves to draw the letter Y
		 * @return letter_
		 */
		void Y();

		/**
		 * @brief The curves to draw the letter Z
		 * @return letter_
		 */
		void Z();
};


#endif /* FONTV2_H_ */

