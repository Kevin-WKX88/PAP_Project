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
		 * @brief Add a new curve in the letter
		 * @param C The new curve to add
		 */
		void addCurve(BezierCurve C);

		/**
		 * @brief Draw the letter D
		 * @param thickness 
		 * @return letter_
		 */
		std::vector<BezierCurve> F1D(int thickness);

		/**
		 * @brief The curves to draw the letter Z
		 * @param size [description]
		 * @param thickness [description]
		 * @return letter_
		 */
		std::vector<BezierCurve> Z(double size, int thickness);


		/**
		 * @brief Get the vector of curves to draw the letter
		 * @return The vector containing the curves of the letter
		 */
		// std::vector<BezierCurve> getLetterCurve();
		
};


#endif /* FONTV1_H_ */





















