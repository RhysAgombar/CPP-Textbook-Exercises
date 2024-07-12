// Ch11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "poly.h"

int main()
{
    std::cout << "Calling B1::vf, then B1::f" << std::endl;
    B1 b1_obj;
    b1_obj.vf();
    b1_obj.f();

    std::cout << "Calling D1::vf, then D1::f" << std::endl;
    D1 d1_obj;
    d1_obj.vf();
    d1_obj.f();

    std::cout << "Calling D1::vf, then D1::f for reference object B1& -> D1" << std::endl;
    B1& b1_ref = d1_obj;
    b1_ref.vf();
    b1_ref.f();


}