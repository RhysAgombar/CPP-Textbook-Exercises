#include "poly.h"

void B1::vf() {
	std::cout << "B1::vf()" << std::endl;
}

void B1::f() {
	std::cout << "B1::f()" << std::endl;
}

void D1::vf(){
	std::cout << "D1::vf()" << std::endl;
}

void D1::f() {
	std::cout << "D1::f()" << std::endl;
}

void D2::pvf() {
	std::cout << "D2::pvf()" << std::endl;
}

void D21::pvf() {
	std::cout << D21::data_member << std::endl;
}

void D22::pvf() {
	std::cout << D22::data_member << std::endl;
}