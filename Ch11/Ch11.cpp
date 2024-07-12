// Ch11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "poly.h"

void f(B2& b2) {
    b2.pvf();
}

int main()
{

    //std::cout << "Calling B1::vf, then B1::f" << std::endl;
    //B1 b1_obj;
    //b1_obj.vf();
    //b1_obj.f();
    //b1_obj.pvf();

    //std::cout << "Calling D1::vf, then D1::f" << std::endl;
    //D1 d1_obj;
    //d1_obj.vf();
    //d1_obj.f();
    //d1_obj.pvf();

    //std::cout << "Calling D1::vf, then D1::f for reference object B1& -> D1" << std::endl;
    //B1& b1_ref = d1_obj;
    //b1_ref.vf();
    //b1_ref.f();
    //b1_ref.pvf();


    std::cout << "Calling D2::vf, then D2::f, then D2::pvf" << std::endl;
    D2 d2_obj;
    d2_obj.vf();
    d2_obj.f();
    d2_obj.pvf();

    std::cout << "Calling D21::pvf, then f()" << std::endl;
    D21 d21_obj;
    d21_obj.pvf();
    f(d21_obj);

    std::cout << "Calling D22::pvf, then f()" << std::endl;
    D22 d22_obj;
    d22_obj.pvf();
    f(d22_obj);

}