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
	protected:
		Image img_;
		int thickness_ = 20;

	public:
		/**
		 * @brief Valued constructor
		 */
		FontV1(char* imageName) : img_(imageName, 500, 500) {
		};

		void finishLetter();


		/**
		 * @brief Valued constructor
		 * @param points Vector of points of the Bezier curve
		 */

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


		/**
		 * @brief Get the vector of curves to draw the letter
		 * @return The vector containing the curves of the letter
		 */
		// void getLetterCurve();
		
};


#endif /* FONTV1_H_ */





















