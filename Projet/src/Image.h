/*!
 * \file Image.h
 * \brief Class Image
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdlib.h>
#include <png.h>

class Image {
	private:
		FILE *fp_;
		char *fileName_;
		png_structp pngPtr_;
		png_infop infoPtr_;
		int width_;
		int height_;
		static const png_byte colorType_ = PNG_COLOR_TYPE_RGB;
		static const png_byte bitDepth_ = 8;
		png_bytep *rowPointers_;
		//int backgroundRGB_[3];

	public:
		//Image();
		/**
		 * @brief Valued constructor
		 * @param x An int
		 * @param y An int
		 */
		Image(char* fileName, int width, int height);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Image(const Image &P);

		/**
		 * @brief Destructor
		 */
		~Image();

		/**
		 * @brief Produce the image
		 */
		void writeImage();
};

#endif /* IMAGE_H_ */
