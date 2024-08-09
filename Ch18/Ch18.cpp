// Ch18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int in[], int len) {
    int* la = new int[len];
    int testarr[10];

    
    copy(in, in + 10, testarr);
    for (int i = 0; i < 10; i++) {
        cout << testarr[i] << " ";
    }
    cout << std::endl;

    copy(in, in + len, la);
    for (int i = 0; i < 10; i++) {
        cout << la[i] << " ";
    }
    cout << std::endl;
    delete[] la;
};

int main()
{
    f(ga, 10);
}