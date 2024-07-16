#include <iostream>
#include "vector"

void print_array10(std::ostream& os, int* a) {
    // assume 10 elements

    for (int i = 0; i < 10; i++) {
        os << a[i] << std::endl;
    }
}

void print_array(std::ostream& os, int* a, int n) {
    // assume n elements

    for (int i = 0; i < n; i++) {
        os << a[i] << std::endl;
    }
}

void print_vec(std::ostream& os, std::vector<int> a, int n) {
    // assume n elements

    for (int i = 0; i < n; i++) {
        os << "Vec: " << a[i] << std::endl;
    }
}


int main()
{
    // PART 1
    std::cout << "--PART ONE--" << std::endl;
    int* new_ints = new int[10];

    for (int i = 0; i < 10; i++) {
        std::cout << new_ints[i] << std::endl;
    }

    delete[] new_ints;

    int* print_ints = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* print_ints11 = new int[11] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int* print_ints20 = new int[20];

    for (int i = 0; i < 20; i++) {
        print_ints20[i] = i + 1;
    }

    std::ostream& out = std::cout;
    print_array10(out, print_ints);
    print_array(out, print_ints, 10);
    print_array(out, print_ints11, 11);
    print_array(out, print_ints20, 20);

    delete[] print_ints;
    delete[] print_ints11;
    delete[] print_ints20;

    std::vector<int> vec10, vec11, vec20;
    for (int i = 0; i < 10; i++) {
        vec10.push_back(i + 1);
    }
    for (int i = 0; i < 11; i++) {
        vec11.push_back(i + 1);
    }
    for (int i = 0; i < 20; i++) {
        vec20.push_back(i + 1);
    }
    print_vec(out, vec10, 10);
    print_vec(out, vec11, 11);
    print_vec(out, vec20, 20);

    //PART 2
    std::cout << "--PART TWO--" << std::endl;
    int* p1 = new int{ 7 };
    int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
    std::cout << p1 << std::endl;
    std::cout << *p1 << std::endl;
       

    std::cout << p2 << std::endl;
    for (int i = 0; i < 7; i++) {
        std::cout << p2[i] << std::endl;
    }

    delete p1;

    int* p3{ p2 };
    p1 = p2;
    p3 = p2;
    
    for (int i = 0; i < 7; i++) {
        std::cout << "p1 - " << p1[i] << std::endl;
        std::cout << "p1 - " << &p1[i] << std::endl;
        std::cout << "p2 - " << p2[i] << std::endl;
        std::cout << "p2 - " << &p2[i] << std::endl;
    }
    std::cout << "p3 - " << p3 << std::endl;
    std::cout << "p3 - " << *p3 << std::endl;

    delete[] p2;

    p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p2 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        p1[i] = p2[i];
    }
    std::cout << "P1 - ";
    for (int i = 0; i < 10; i++) {
        std::cout << p1[i] << " ";
    }
    p2[5] = 999;
    std::cout << std::endl << "P2 - ";
    for (int i = 0; i < 10; i++) {
        std::cout << p2[i] << " ";
    }
    std::cout << std::endl;

    delete[] p1;
    delete[] p2;
}