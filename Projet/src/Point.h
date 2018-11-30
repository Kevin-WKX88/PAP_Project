/*
 * Point.h
 *
 *  Created on: Nov 30, 2018
 *      Author: Kevin Xu
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
	private:
		double x;
		double y;

	public:
		Point();
		Point(int x, int y);
		Point(Point P);
		~Point();

		double get_x();
		double get_y();
};

#endif /* POINT_H_ */
