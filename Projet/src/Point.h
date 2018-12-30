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

	public:
		Point();
		/**
		 * @brief Valued constructor
		 * @param x An int
		 * @param y An int
		 */
		Point(int x, int y);

		/**
		 * @brief Copy-constructor
		 * @param P Point
		 */
		Point(const Point &P);

		/**
		 * @brief Getter for x
		 * @return x_
		 */
		int getX() const;

		/**
		 * @brief Getter for y_
		 * @return y_
		 */
		int getY() const;

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
