#include <iostream>
#include <stdlib.h>

#include <png.h>
#include <cmath>


int main(int argc, char *argv[]) {
	char *file_name = argv[1];

	// File creation
	FILE *fp = fopen(file_name, "wb"); 
	if (!fp) {
		printf("Erreur de creation du fichier\n");
		abort();
	}

	// png_structp creation
	png_structp png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if (!png_ptr) {
		fclose(fp);
		printf("Erreur de creation png_structp\n");
		return 1; 
	}

	png_infop info_ptr = png_create_info_struct(png_ptr); 
	if (!info_ptr) {
	   	png_destroy_write_struct(&png_ptr, NULL);
		fclose(fp);
		printf("Erreur de creation png_infop\n");
		abort(); //return 1; 
	}

	if (setjmp(png_jmpbuf(png_ptr))) {
		png_destroy_write_struct(&png_ptr, &info_ptr); 
		fclose(fp);
		printf("Erreur sepjmp\n");
		abort(); //return 1; 
	}

	png_init_io(png_ptr, fp);

	// Output is 8bit depth, RGBA format.

	// Image Info
	int width = 500;
	int height = 500;
	png_byte color_type = PNG_COLOR_TYPE_RGB;
	png_byte bit_depth = 8;

	png_set_IHDR(
		png_ptr, 
		info_ptr, 
		width, 
		height, 
		bit_depth, 
		color_type, 
		PNG_INTERLACE_NONE, 
		PNG_COMPRESSION_TYPE_DEFAULT, 
		PNG_FILTER_TYPE_DEFAULT
	);
	png_write_info(png_ptr, info_ptr);

	// Writing data
	png_bytep *row_pointers;
	row_pointers = (png_bytep*) malloc(height * sizeof(png_bytep));
	// Allocate memory for one row (3 bytes per pixel - RGB)
	for (int y = 0; y < height; y++) {
    	row_pointers[y] = (png_byte*) malloc(3 * width * sizeof(png_byte));
  	}

	// Draw
	for(int y = 0; y < height; y++) {
	    png_bytep row = row_pointers[y];
	    for(int x = 0; x < width; x++) {
			png_bytep px = &(row[x * 3]);
			px[0] = 255;
			px[1] = 255;
			px[2] = 255;
	    }
  	}

  	for(int y = 100; y < 200; y++) {
	    png_bytep row = row_pointers[y];
			png_bytep px = &(row[250 * 3]);
			px[0] = 255;
			px[1] = 0;
			px[2] = 255;
  	}


  	// en diagonale
  	int x = 250;
  	int c = 0;
  	for(int y = 100; y < 200; y++) {
  		c++;
  		if (c%10 == 0) {
  			x++;
  		}
	    png_bytep row = row_pointers[y];
		png_bytep px = &(row[x * 3]);
		px[0] = 255;
		px[1] = 0;
		px[2] = 255;
  	}

  	// en diagonale
  	x = 0;
  	c = 0;
  	for(int y = 300; y < 500; y++) {
  		c++;
  		if (c%1 == 0) {
  			x++;
  		}
	    png_bytep row = row_pointers[y];
		png_bytep px = &(row[x * 3]);
		px[0] = 255;
		px[1] = 0;
		px[2] = 255;
  	}

  	x = 500;
  	c = 0;
  	for(int y = 200; y < 450; y++) {
  		c++;
  		if (c%2 == 0) {
  			x--;
  		}
	    png_bytep row = row_pointers[y];
		png_bytep px = &(row[x * 3]);
		px[0] = 255;
		px[1] = 0;
		px[2] = 255;
  	}


  	x = 800;
  	c = 0;
  	for(int y = 200; y < 450; y++) {
  		c++;
  		if (c%2 == 0) {
  			x--;
  		}
	    png_bytep row = row_pointers[y];
		png_bytep px = &(row[x * 3]);
		px[0] = 255;
		px[1] = 0;
		px[2] = 255;
  	}












  	// TEST DE CLASS IMAGE -> DRAW LINE
  	int x1 = 1;
  	int x2 = 380;
  	int y1 = 1;
  	int y2 = 499;
  	int coef = double(y2-y1)/double(x2-x1) - (y2-y1)/(x2-x1) > 0.5 ? (y2-y1)/(x2-x1) + 1 : (y2-y1)/(x2-x1);
  	int step = 0;

  // 	std::cout << "taux = " << coef << std::endl;
  // 	for(int y = y1; y < y2; ) {
  // 		step++;
  // 		if (step%coef == 0) {
  // 			if (abs(y2-y) + abs(x2-(x1+1)) < abs(y2-(y+1)) + abs(x2-x1)) {
	 //  			x1++;
	 //  		}
	 //  		else if (abs(y2-y) + abs(x2-(x1+1)) == abs(y2-(y+1)) + abs(x2-x1)){
	 //  			x1++;
	 //  			y++;
	 //  		}
	 //  		else {
	 //  			y++;
	 //  		}
  // 		}
  // 		else {
  // 			y++;
  // 		}
  		

	 //    png_bytep row = row_pointers[y];
		// png_bytep px = &(row[x1 * 3]);
		// px[0] = 0;
		// px[1] = 0;
		// px[2] = 0;
  // 	}


  	// IF X2-X1 > Y2-Y1
  	x1 = 1;
	x2 = 350;
	y1 = 1;
	y2 = 50;
	x = x1;
  	double h = sqrt(pow(y2-y1, 2) + pow(x2-x1, 2))/double(std::min(x2-x1+1, y2-y1+1));
  	  	std::cout << "h = " << h << std::endl;

  	step = 0;
  	int n = 1;
  	int y = y1;
  	while (y < y2 || x < x2) {
  	  	std::cout << "taille = " << sqrt(pow(y1-y, 2) + pow(x1-x, 2)) << std::endl;
	  	std::cout << "n = " << n << std::endl;

  		if (abs(sqrt(pow(y1-y, 2) + pow(x1-x, 2)) - (h*n)) < 1) {
  			if (x2-x1+1 < y2-y1+1) {
  				x++;
  			}
  			else {
  				y++;
  			}
  			//x++;
  			n++;
		  	std::cout << "x = " << x << " y = " << y << std::endl;

  		}
  		else {
  			if (x2-x1+1 < y2-y1+1) {
  				y++;
  			}
  			else {
  				x++;
  			}
  		}
	    png_bytep row = row_pointers[y];
		png_bytep px = &(row[x * 3]);
		px[0] = 0;
		px[1] = 0;
		px[2] = 0;
  	}
	std::cout << "x = " << x << " y = " << y << std::endl;












	// If you don’t want to write the whole image at once,
	// png_write_rows(png_ptr, row_pointers, number_of_rows);
	
	// png_bytep row_pointer = row;
	// png_write_row(png_ptr, row_pointer);

	png_write_image(png_ptr, row_pointers);
  	png_write_end(png_ptr, NULL);



  	// Freeing memory and closing
  	for(int y = 0; y < height; y++) {
	    free(row_pointers[y]);
	  }
  	free(row_pointers);
  	fclose(fp);
  	if (png_ptr && info_ptr) {
        png_destroy_write_struct(&png_ptr, &info_ptr);
  	}

  	return 0;
}