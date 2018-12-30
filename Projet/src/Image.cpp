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

void Image::draw(Point P) {
	png_bytep px = &(pixels_[P.getY()][P.getX() * 3]);
	unsigned int *color = P.getColor();
	px[0] = color[0];
	px[1] = color[1];
	px[2] = color[2];
}

void Image::draw(Line L) {
  	int x1 = L.getP1().getX();
  	int y1 = L.getP1().getY();
  	int x2 = L.getP2().getX();
  	int y2 = L.getP2().getY();
	int dx = x2-x1;
  	int dy = y2-y1;

  	if (dx != 0) {
  		if (dx > 0) {
  			if (dy != 0) {
  				if (dy > 0) {
  					if (dx >= dy) {
  						int e = dx; // e > 0
  						dx *= 2;
  						dy *= 2;
  						while (1) {
							draw(Point(x1, y1));
							if (x1++ == x2) break;
							e -= dy;
							if (e < 0) {
								y1++;
								e += dx;
							}
  						}
  					}
  					else {
  						// vecteur oblique proche de la verticale, dans le 2d octant
  						int e = dy; // e > 0
  						dy *= 2;
  						dx *= 2;
  						while (1) {
							draw(Point(x1, y1));
							if (y1++ == y2) break;
							if ((e -= dx) < 0) {
								x1++;
								e += dy;
							}
  						}
  					}
  				}
  				else { // dy < 0 && dx > 0
  					if (dx >= -dy) {
  						int e = dx;
  						dx *= 2;
  						dy *= 2;
  						while (1) {
							draw(Point(x1, y1));
							if (x1++ == x2) break;
							if ((e += dy) < 0) {
								y1--;
								e += dx;
							}
  						}
  					}
  					else {
  						int e = dy; // e < 0
  						dx *= 2; 
  						dy *= 2;

  						while (1) {
							draw(Point(x1, y1));
							if (y1-- == y2) break;
							if ((e += dx) > 0) {
								x1++;
								e += dy;
							}
  						}
  					}

  				}
  			}
  			else { // dy == 0 && dx > 0
				// vector horizontal vers la droite
				do {
					draw(Point(x1, y1));
				} while (++x1 != x2); 
			}
  		}
  		else { // dx < 0
  			if (dy != 0) {
  				if (dy > 0) {
  					if (-dx >= dy) {
  						int e = dx; // e < 0
  						dx *= 2;
  						dy *= 2;

  						while (1) {
  							draw(Point(x1, y1));
							if (x1-- == x2) break;
  							if ((e += dy) >= 0) {
  								y1++;
  								e += dx;
  							}
  						}
  					}
  					else {
  						int e = dy; // e > 0
  						dx *= 2;
  						dy *= 2;

  						while (1) {
  							draw(Point(x1, y1));
							if (y1++ == y2) break;
  							if ((e += dx) <= 0) {
  								x1--;
  								e += dy;
  							}
  						}
  					}
  				}
  				else { // dy < 0 && dx < 0
  					if (dx <= dy) {
  						int e = dx; // e < 0
  						dx *= 2;
  						dy *= 2;
  						while (1) {
  							draw(Point(x1, y1));
							if (x1-- == x2) break;
							if ((e -= dy) >= 0) {
								y1--;
								e += dx;
							}
  						}
  					}
  					else {
  						int e = dy; // e < 0
  						dx *= 2;
  						dy *= 2;
  						while (1) {
  							draw(Point(x1, y1));
							if (y1-- == y2) break;
							if ((e -= dx) >= 0) {
								x1--;
								e += dy;
							}
  						}
  					}
  				}
  			}
  			else { //dy == 0 && dx < 0
  				do {
  					draw(Point(x1, y1));
				} while (--x1 != x2);
  			}
  		}
  	}
  	else { // dx == 0
  		if (dy != 0) {
  			if (dy > 0) {
  				do {
  					draw(Point(x1, y1));
  				} while (++y1 != y2);
  			}
  			else { // dy < 0 && dx == 0
  				do {
  					draw(Point(x1, y1));
  				} while (--y1 != y2);
  			}
  		}
  	}
	
}

void Image::drawStraightLine(Line L) {
	if (L.getP1().getX() == L.getP2().getX()) {
		for (int y = L.getP1().getY(); y < L.getP2().getY(); y++) {
			draw(Point(L.getP1().getX(), y));
  		}
	}
	else {
		int y = L.getP1().getY();
		for (int x = L.getP1().getX(); x < L.getP2().getX(); x++) {
			draw(Point(x, y));
  		}
	}
}












