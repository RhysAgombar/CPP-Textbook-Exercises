#pragma once
#include <iostream>

class B1 {
public:
	void virtual vf();
	void f();
};

class D1 : public B1 {
public:
	void vf();
	void f();
};