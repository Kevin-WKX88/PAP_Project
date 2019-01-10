/*!
 * \file Point.h
 * \brief Class Point
 * \author Kevin XU & Ziheng LI
 * \date 30 Novembre 2018
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
	private:
		int x_; /*!< x coordinate */
		int y_; /*!< y coordinate */
		unsigned int *color_; /*!< Color of the point */

	public:
		/**
		 * @brief Default Constructor
		 * @details Initialize the members to zero
		 */
		Point();

		/**
		 * @brief Valued constructor
		 * @param x coordinate
		 * @param y coordinate
 		 * @param R Red level intensity
		 * @param G Green level intensity
		 * @param B Blue level intensity
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
};

/**
 * @brief Overload of the operator <<
 * @param out the output stream
 * @param P 
 * @return out
 */
std::ostream & operator <<(std::ostream & out, const Point & P);

#endif /* POINT_H_ */
