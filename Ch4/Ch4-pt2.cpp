#include "std_lib_facilities.h"

int main()
{
    // Drills for Ch4

    cout << "Please enter a double.\n";
    double input = 0;
    double smallest = 0.0;
    double largest = 0.0;

    while (cin >> input) {
        cout << "Received: " << input;

        if (in_vec.size() > 1) {
            cout << "Number 1: " << in_vec[0] << " \nNumber 2: " << in_vec[1] << "\n";

            double smaller = 0;
            double larger = 0;
            if (in_vec[1] > in_vec[0]) {
                smaller = in_vec[0];
                larger = in_vec[1];
            }
            else {
                smaller = in_vec[1];
                larger = in_vec[0];
            }

            if (in_vec[1] - in_vec[0] < 0.01) {
                cout << smaller << " is almost equal to " << larger << "\n";
            }
            else {
                cout << "Smaller Number: " << smaller << " \nLarger Number: " << larger << "\n";
            }

            in_vec.clear();
        }

    }
    cout << "Program Complete!\n";
}
