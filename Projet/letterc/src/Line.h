/*!
 * \file Line.h
 * \brief Class Line
 * \author Kevin XU
 * \date 29 Decembre 2018
 */

#ifndef LINE_H_
#define LINE_H_

#include <iostream>
#include "Point.h" 

class Line {
	private:
		Point P1_;
		Point P2_;
		unsigned int thickness_; // Nb of pixels
		unsigned int *color_;

	public:
		/**
		 * @brief Valued constructor
		 * @param P1 First point
		 * @param P2 Second point
		 * @param R Red level
		 * @param G Green level
		 * @param B Blue level
		 * @param thickness thickness of the line
		 */
		Line(Point P1, Point P2, unsigned int R = 0, unsigned int G = 0, unsigned int B = 0, unsigned int thickness = 1);

		/**
		 * @brief Getter for P1_
		 * @return The first point
		 */
		Point getP1() const;

		/**
		 * @brief Getter for P2_
		 * @return The second point
		 */
		Point getP2() const;

		/**
		 * @brief Setter for P1_
		 * @param P1 
		 */
		void setP1(Point P1);

		/**
		 * @brief Setter for P2_
		 * @param P2 
		 */
		void setP2(Point P2);

		/**
		 * @brief Getter for thickness_
		 * @param thickness 
		 */
		void setThickness(unsigned int thickness);

		/**
		 * @brief Setter for color_
		 * @param R Red level
		 * @param G Green level
		 * @param B Blue level
		 */
		void setColor(unsigned int R, unsigned int G, unsigned int B);

		/**
		 * @brief Getter for color_
		 * @return color_
		 */
		unsigned int* getColor() const;
};

/**
 * @brief Overload of the operator <<
 * @param out the output stream
 * @param L
 * @return out
 */
std::ostream & operator <<(std::ostream & out, const Line & L);

#endif /* LINE_H_ */
