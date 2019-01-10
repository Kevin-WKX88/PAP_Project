/*!
 * \file Image.h
 * \brief Class Image
 * \author Kevin XU & Ziheng LI
 * \date 30 Novembre 2018
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdlib.h>
#include <png.h>
#include <vector>

#include "Point.h"
#include "BezierCurve.h"

class Image {
	private:
		FILE *fp_; /*!< The file corresponding to the image */
		char *fileName_; /*!< The file name */
		png_structp pngPtr_; /*!< Pointer on the image */
		png_infop infoPtr_; /*!< Information on the image */
		int width_; /*!< The width of the image */
		int height_; /*!< The height of the image */
		png_bytep *pixels_; /*!< The pixels of the image */
	public:
		/**
		 * @brief Valued Constructor
		 * @details Initialize the image
		 * @param fileName The name of the image
		 * @param width The width of the image
		 * @param height The height of the image
		 */
		Image(char* fileName, int width, int height);

		/**
		 * @brief Destructor
		 */
		~Image();

		/**
		 * @brief Produce the image
		 */
		void writeImage();

		/**
		 * @brief Getter for pixels_
		 * @return the pixels_ pointer
		 */
		png_bytep* getPixels() const;

		/**
		 * @brief Get the RGB level intensity of a pixel
		 * @param P The pixel
		 * @return The RGB color
		 */
		unsigned int* getPixelColor(Point P);

		/**
		 * @brief Draw a point P
		 * @details Modify the pixels on the image to draw a point
		 * @param P the point to draw
		 */
		void draw(Point P);
		
		/**
		 * @brief Draw the points in the vector
		 * @param points The list of points to draw
		 */
		void draw(std::vector<Point> points);

		/**
		 * @brief Draw the Bezier curves
		 * @param curves The curves to draw
		 */
		void draw(std::vector<BezierCurve> curves);
};

#endif /* IMAGE_H_ */