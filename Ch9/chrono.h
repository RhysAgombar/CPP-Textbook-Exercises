#pragma once
#include <ostream>
#include <istream>

namespace Chrono {
	enum class Month {
		Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
	};

	enum class Day {
		Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};

	class Date {
	public:
		class Invalid {};

		Date(int y, Month m, int d);
		Date();

		int day() const { return d; }
		Month mont() const { return m; }
		int year() const { return y; }

		void add_day(int n);
		void add_month(int n);
		void add_year(int n);

	private:
		int y;
		Month m;
		int d;
	};

	bool is_date(int y, Month m, int d);
	bool leapyear(int y);

	bool operator==(const Date& a, const Date& b);
	bool operator!=(const Date& a, const Date& b);

	std::ostream& operator<<(std::ostream& os, const Date& d);
	std::istream& operator>>(std::istream& is, Date& dd);

	Day day_of_week(const Date& d);
	Date next_Sunday(const Date d);
	Date next_weekday(const Date& d);
}