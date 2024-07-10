#pragma once
#include <iostream>
#include <ios>

namespace PNS {
	class Point {
	public:
		Point(int, int);
		Point();
		int get_x() const;
		void set_x(int);
		int get_y() const;
		void set_y(int);
	private:
		int x;
		int y;
	};

	std::ostream& operator<<(std::ostream& os, const Point &p);
	std::istream& operator>>(std::istream& is, Point &p);
}
