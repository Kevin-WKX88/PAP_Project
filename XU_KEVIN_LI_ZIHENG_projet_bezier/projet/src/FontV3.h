/*!
 * \file FontV3.h
 * \brief Class FontV3
 * \author Kevin XU & Ziheng LI
 * \date 8 Janvier 2018
 */
 
#ifndef FONTV3_H_
#define FONTV3_H_

#include "Point.h"
#include "Image.h"
#include "BezierCurve.h"
#include "FontV2.h"

class FontV3 : public FontV2{
	public:
		/**
		 * @brief Valued constructor
		 * @param imageName The name of the image
		 */
		FontV3(char* imageName) : FontV2(imageName) {}

		/**
		 * @brief Add a red contour around a letter
		 */
		void addRedContour();

		/**
		 * @brief Draw a contour of two pixels around the letter A
		 */
		void A();

		/**
		 * @brief Draw a contour of two pixels around the letter B
		 */
		void B();

		/**
		 * @brief Draw a contour of two pixels around the letter C
		 */
		void C();

		/**
		 * @brief Draw a contour of two pixels around the letter D
		 */
		void D();

		/**
		 * @brief Draw a contour of two pixels around the letter E
		 */
		void E();

		/**
		 * @brief Draw a contour of two pixels around the letter F
		 */
		void F();

		/**
		 * @brief Draw a contour of two pixels around the letter G
		 */
		void G();

		/**
		 * @brief Draw a contour of two pixels around the letter H
		 */
		void H();

		/**
		 * @brief Draw a contour of two pixels around the letter I
		 */
		void I();

		/**
		 * @brief Draw a contour of two pixels around the letter J
		 */
		void J();

		/**
		 * @brief Draw a contour of two pixels around the letter K
		 */
		void K();

		/**
		 * @brief Draw a contour of two pixels around the letter L
		 */
		void L();

		/**
		 * @brief Draw a contour of two pixels around the letter M
		 */
		void M();

		/**
		 * @brief Draw a contour of two pixels around the letter N
		 */
		void N();

		/**
		 * @brief Draw a contour of two pixels around the letter O
		 */
		void O();

		/**
		 * @brief Draw a contour of two pixels around the letter P
		 */
		void P();

		/**
		 * @brief Draw a contour of two pixels around the letter Q
		 */
		void Q();

		/**
		 * @brief Draw a contour of two pixels around the letter R
		 */
		void R();

		/**
		 * @brief Draw a contour of two pixels around the letter S
		 */
		void S();

		/**
		 * @brief Draw a contour of two pixels around the letter T
		 */
		void T();

		/**
		 * @brief Draw a contour of two pixels around the letter U
		 */
		void U();

		/**
		 * @brief Draw a contour of two pixels around the letter V
		 */
		void V();

		/**
		 * @brief Draw a contour of two pixels around the letter W
		 */
		void W();

		/**
		 * @brief Draw a contour of two pixels around the letter X
		 */
		void X();

		/**
		 * @brief Draw a contour of two pixels around the letter Y
		 */
		void Y();

		/**
		 * @brief Draw a contour of two pixels around the letter Z
		 */
		void Z();
};

#endif /* FONTV3_H_ */