/*!
 * \file FontV3.h
 * \brief Class FontV3
 * \author Kevin XU & Ziheng LI
 * \date 8 Janvier 2018
 */
 
#ifndef FONTV3_H_
#define FONTV3_H_

#include <vector>
#include <cmath>

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
		 * @brief Draw a contour of two pixels around the letter C
		 */
		void C();


};

#endif /* FONTV3_H_ */