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

class FontV2{
	private:
		std::vector<BezierCurve> letter_;
		int thickness_ = 20;

	public:
		/**
		 * @brief Default constructor
		 */
		FontV2() {};

		/**
		 * @brief Valued constructor
		 * @param points Vector of points of the Bezier curve
		 */
		FontV2(std::vector<BezierCurve> letter);

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

