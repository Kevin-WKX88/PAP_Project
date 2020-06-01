/*!
 * \file Image.cpp
 * \brief Class Image Implementation
 * \author Kevin XU & Ziheng LI
 * \date 30 Novembre 2018
 */

#include <iostream>
#include "Image.h"

Image::Image(char* fileName, int width, int height) {
	// File creation
	fileName_ = fileName;
	fp_ = fopen(fileName, "wb"); 
	if (!fp_) {
		std::cout << "Erreur de creation du fichier" << std::endl;
		abort();
	}
	// png_structp creation
	pngPtr_ = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if (!pngPtr_) {
		fclose(fp_);
		std::cout << "Erreur de creation png_structp" << std::endl;
		abort();
	}

	infoPtr_ = png_create_info_struct(pngPtr_); 
	if (!infoPtr_) {
	   	png_destroy_write_struct(&pngPtr_, NULL);
		fclose(fp_);
		std::cout << "Erreur de creation png_infop" << std::endl;
		abort(); //return 1; 
	}
	if (setjmp(png_jmpbuf(pngPtr_))) {
		png_destroy_write_struct(&pngPtr_, &infoPtr_); 
		fclose(fp_);
		std::cout << "Erreur sepjmp" << std::endl;
		abort(); //return 1; 
	}
	png_init_io(pngPtr_, fp_);
	// Image Info
	width_ = width;
	height_ = height;
	png_set_IHDR(
		pngPtr_, 
		infoPtr_, 
		width_, 
		height_, 
		8, 
		PNG_COLOR_TYPE_RGB, 
		PNG_INTERLACE_NONE, 
		PNG_COMPRESSION_TYPE_DEFAULT, 
		PNG_FILTER_TYPE_DEFAULT
	);
	png_write_info(pngPtr_, infoPtr_);
	
	pixels_ = (png_bytep*) malloc(height_ * sizeof(png_bytep));
	// Allocate memory for one row (3 bytes per pixel - RGB)
	for (int y = 0; y < height_; y++) {
    	pixels_[y] = (png_byte*) malloc(3 * width_ * sizeof(png_byte));
  	}
  	// Set white background
  	for (int y = 0; y < height_; y++) {
	    png_bytep row = pixels_[y];
	    for(int x = 0; x < width_; x++) {
			png_bytep px = &(row[x * 3]);
			px[0] = 255;
			px[1] = 255;
			px[2] = 255;
	    }
  	}
}

Image::~Image() {
	// Freeing memory and closing
  	for (int y = 0; y < height_; y++) {
	    free(pixels_[y]);
	}
  	free(pixels_);
  	fclose(fp_);
  	if (pngPtr_ && infoPtr_) {
        png_destroy_write_struct(&pngPtr_, &infoPtr_);
  	}
}

void Image::writeImage() {
	png_write_image(pngPtr_, pixels_);
  	png_write_end(pngPtr_, NULL);
}

png_bytep* Image::getPixels() const {
	return pixels_;
}

unsigned int* Image::getPixelColor(Point P) {
	png_bytep px = &(pixels_[height_-P.getY()][P.getX() * 3]);
	unsigned int *color = new unsigned int[3];
	color[0] = px[0];
	color[1] = px[1];
	color[2] = px[2];
	return color;
}

void Image::draw(Point P) {
	png_bytep px = &(pixels_[height_-P.getY()][P.getX() * 3]);
	unsigned int *color = P.getColor();
	px[0] = color[0];
	px[1] = color[1];
	px[2] = color[2];
}

void Image::draw(std::vector<Point> points) {
    for (auto it = points.begin(); it != points.end(); it++) {
        draw(*it);
    }
}

void Image::draw(std::vector<BezierCurve> curves) {
	for (auto it = curves.begin(); it != curves.end(); it++) {
        draw(it->getCurvePoints());
    } 
}