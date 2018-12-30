/*!
 * \file Image.cpp
 * \brief Class Image Implementation
 * \author Kevin XU
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

	// Output is 8bit depth, RGBA format.

	// Image Info
	width_ = width;
	height_ = height;

	png_set_IHDR(
		pngPtr_, 
		infoPtr_, 
		width_, 
		height_, 
		bitDepth_, 
		colorType_, 
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

//Image::Image(const Image &P);

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

void Image::draw(Line L) {
	// Point P1 = L.getP1();
	// Point P2 = L.getP2();

	// Test of bounds ?
	
}

void Image::drawStraightLine(Line L) {
	unsigned int *color = L.getColor();

	if (L.getP1().getX() == L.getP2().getX()) {
		for(int y = L.getP1().getY(); y < L.getP2().getY(); y++) {
		    png_bytep row = pixels_[y];
			png_bytep px = &(row[L.getP1().getX() * 3]);
			px[0] = color[0];
			px[1] = color[1];
			px[2] = color[2];
  		}
	}
	else {
		png_bytep row = pixels_[L.getP1().getY()];
		for(int x = L.getP1().getX(); x < L.getP2().getX(); x++) {
			png_bytep px = &(row[x * 3]);
			px[0] = color[0];
			px[1] = color[1];
			px[2] = color[2];
  		}
	}
}










