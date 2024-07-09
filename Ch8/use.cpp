#include "std_lib_facilities.h"
#include "my.h"

int foo;

namespace X {
	int var{ 0 };
	void print() { std::cout << var << " -- X" << '\n'; };
}

namespace Y {
	int var{ 0 };
	void print() { std::cout << var << " -- Y" << '\n'; };
}

namespace Z {
	int var{ 0 };
	void print() { std::cout << var << " -- Z" << '\n'; };
}

int main()
{
    foo = 7;
    print_foo();
    print(99);


    int x = 7;
    int y = 9;
    swap_v(x, y);
    cout << x << ' ' << y << '\n';
    swap_r(x, y);
    cout << x << ' ' << y << '\n';


	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();

}