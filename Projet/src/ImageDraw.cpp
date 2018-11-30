/*!
 * \file Image.h
 * \brief Class Point
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <stdlib.h>
#include <png.h>

class Image {
	private:
		FILE *fp;
		char *title;
		png_structp png_ptr;
		png_infop info_ptr;
		int width;
		int height;
		png_byte color_type = PNG_COLOR_TYPE_RGB;
		png_byte bit_depth = 8;

	public:
		Image();
		/**
		 * @brief Valued constructor
		 * @param x An int
		 * @param y An int
		 */
		Image(int x, int y);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Image(const Image &P);

		/**
		 * @brief Getter for x
		 * @return return x
		 */
		int get_x() const;

		/**
		 * @brief Setter for x
		 * @param x A int
		 */
		void set_x(int x);

		/**
		 * @brief Setter for y
		 * @param y A int
		 */
		void set_y(int y);
};

#endif /* IMAGE_H_ */
