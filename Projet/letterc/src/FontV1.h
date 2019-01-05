/*!
 * \file FontV1.h
 * \brief Class FontV1
 * \author Kevin XU & Ziheng LI
 * \date 31 Décembre 2018
 */
 
#ifndef FONTV1_H_
#define FONTV1_H_

#include <vector>
#include <cmath>

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"

class FontV1{
	private:
		std::vector<BezierCurve> letter_;
		int thickness_ = 20;

	public:
		/**
		 * @brief Default constructor
		 */
		FontV1() {};

		/**
		 * @brief Valued constructor
		 * @param points Vector of points of the Bezier curve
		 */
		FontV1(std::vector<BezierCurve> letter);

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
		 * @brief The curves to draw the letter D
		 * @return letter_
		 */
		std::vector<BezierCurve> D();

		/**
		 * @brief The curves to draw the letter E
		 * @return letter_
		 */
		std::vector<BezierCurve> E();

		/**
		 * @brief The curves to draw the letter F
		 * @return letter_
		 */
		std::vector<BezierCurve> F();

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


		/**
		 * @brief Get the vector of curves to draw the letter
		 * @return The vector containing the curves of the letter
		 */
		// std::vector<BezierCurve> getLetterCurve();
		
};


#endif /* FONTV1_H_ */





















