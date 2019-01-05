/*!
 * \file Point.h
 * \brief Class Point
 * \author Kevin XU
 * \date 30 Novembre 2018
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
	private:
		int x_;
		int y_;
		unsigned int *color_;

	public:
		Point();

		/**
		 * @brief Valued constructor
		 * @param x [description]
		 * @param y [description]
 		 * @param R Red level
		 * @param G Green level
		 * @param B Blue level
		 */
		Point(int x, int y, unsigned int R = 0, unsigned int G = 0, unsigned int B = 0);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Point(const Point &P);

		/**
		 * @brief Destructor
		 */
		~Point();

		/**
		 * @brief Getter for x
		 * @return x_
		 */
		inline int getX() const {return x_;}

		/**
		 * @brief Getter for y_
		 * @return y_
		 */
		inline int getY() const {return y_;}

		/**
		 * @brief Setter for x_
		 * @param x 
		 */
		void setX(int x);

		/**
		 * @brief Setter for y_
		 * @param y 
		 */
		void setY(int y);

		/**
		 * @brief Getter for color_
		 * @return color_
		 */
		inline unsigned int* getColor() {return color_;};


		/**
		 * @brief Euclidian distance between two points
		 * @param P The other point
		 * @return The euclidian distance
		 */
		double dist(Point P);
};

/**
 * @brief Overload of the operator <<
 * @param out the output stream
 * @param P 
 * @return out
 */
std::ostream & operator <<(std::ostream & out, const Point & P);

#endif /* POINT_H_ */
