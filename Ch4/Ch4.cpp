#include "std_lib_facilities.h"

int main()
{
    // Drills for Ch4

    cout << "Please enter two numbers.\n";
    int input = 0;
    vector<int> in_vec;

    while (cin >> input) {
        in_vec.push_back(input);

        if (in_vec.size() > 1) {
            cout << "Number 1: " << in_vec[0] << " \nNumber 2: " << in_vec[1] << "\n";
            
            int smaller = 0;
            int larger = 0;
            if (in_vec[1] > in_vec[0]) {
                smaller = in_vec[0];
                larger = in_vec[1];
            }
            else {
                smaller = in_vec[1];
                larger = in_vec[0];
            }
            cout << "Smaller Number: " << smaller << " \nLarger Number: " << larger << "\n";

        }
                        
        in_vec.clear();
    }
    cout << "Program Complete!\n";
}
