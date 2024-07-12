#pragma once
#include <iostream>
#include <string>

class B1 {
public:
	void virtual vf();
	void f();
	void virtual pvf() = 0;
};

class D1 : public B1 {
public:
	void vf();
	void f();
};

class D2 : public D1 {
public:
	void pvf();
};

class B2 {
public:
	void virtual pvf() = 0;
};

class D21 : public B2 {
public:
	std::string data_member = "D21";
	void pvf();
};

class D22 : public B2 {
public:
	int data_member = 21;
	void pvf();
};