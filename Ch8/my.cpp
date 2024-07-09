#include "std_lib_facilities.h"
#include "my.h"

void print_foo() {
	cout << "foo: " << foo << '\n';
}

void print(int i) {
	cout << "print: " << i << '\n';
}

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}