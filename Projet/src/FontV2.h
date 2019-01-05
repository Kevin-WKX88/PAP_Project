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
		//FontV2() {};

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
		std::vector<BezierCurve> A();

		/**
		 * @brief The curves to draw the letter B
		 * @return letter_
		 */
		std::vector<BezierCurve> B();

		/**
		 * @brief The curves to draw the letter C
		 * @return letter_
		 */
		std::vector<BezierCurve> C();

		/**
		 * @brief The curves to draw the letter D
		 * @return letter_
		 */
		std::vector<BezierCurve> D();

		/**
		 * @brief The curves to draw the letter G
		 * @return letter_
		 */
		std::vector<BezierCurve> G();

		/**
		 * @brief The curves to draw the letter O
		 * @return letter_
		 */
		std::vector<BezierCurve> O();

		/**
		 * @brief The curves to draw the letter S
		 * @return letter_
		 */
		std::vector<BezierCurve> S();

		/**
		 * @brief The curves to draw the letter Z
		 * @return letter_
		 */
		std::vector<BezierCurve> Z();
};


#endif /* FONTV2_H_ */

