/*!
 * \file BezierCurve.h
 * \brief Class BezierCurve
 * \date 30 Décembre
 */


#ifndef BEZIERCURVE_H_
#define BEZIERCURVE_H_

#include <vector>
#include <cmath>

#include "Point.h"

class BezierCurve {
	private:
		std::vector<Point> points_;
		double ratio_ = 0.000001;

	public:
		/**
		 * @brief Default constructor
		 */
		BezierCurve() {};

		/**
		 * @brief Valued constructor
		 * @param points Vector of points of the Bezier curve
		 */
		BezierCurve(std::vector<Point> points);

		/**
		 * @brief Getter for points_
		 * @return points_
		 */
		std::vector<Point> getPoints() const;

		/**
		 * @brief Add a new point in the Bezier Curve
		 * @return The computed Point
		 */
		void addPoint(Point P);

		/**
		 * @brief Empty the vector points
		 */
		void clearPoints();

		/**
		 * @brief Get the point computed by De Casteljau's algorithm
		 * @param c The size of the current points vector
		 * @param index 
		 * @param t Parameter
		 * @return The computed Point
		 */
		Point getCasteljauPoint(int c, int index, double t);

		/**
		 * @brief Get the vector of points to draw the Bezier curve
		 * @details Compute the points for a given precision
		 * @return The vector containing the points of the curve
		 */
		std::vector<Point> getCurvePoints();
};

#endif /* BEZIERCURVE_H_ */
