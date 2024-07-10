#include "Point.h"

namespace PNS {

	Point::Point(int xi, int yi) {
		x = xi;
		y = yi;
	}

	Point::Point() {
		x = -1;
		y = -1;
	}

	int Point::get_x() const {
		return x;
	}

	void Point::set_x(int xi) {
		x = xi;
	}

	int Point::get_y() const {
		return y;
	}

	void Point::set_y(int yi) {
		y = yi;
	}

	std::ostream& operator<<(std::ostream& os, const Point& p) {
		return os << '(' << p.get_x() << ',' << p.get_y() << ')';
	}

	std::istream& operator>>(std::istream& is, Point& p) {
		char c1, c2, c3;
		int x, y;
		is >> c1 >> x >> c2 >> y >> c3;
		if (!is) return is;

		if (c1 != '(' || c2 != ',' || c3 != ')') {
			is.clear(std::istream::failbit);
			return is;
		}

		p = Point(x, y);
		return is;
	}

}