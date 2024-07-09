#include "std_lib_facilities.h"

int main()
{
    // Drills for Ch4

    cout << "Please enter two doubles.\n";
    double input = 0;
    vector<double> in_vec;

    while (cin >> input) {
        in_vec.push_back(input);

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
    cout << "Part 1 Complete!\n";

    string buffer = "";
    cin >> buffer;

    cout << "Please enter a double.\n";
    double input_single = 0;
    double smallest = 0.0;
    double largest = 0.0;

    while (cin >> input_single) {
        cout << "Received: " << input_single;

        if (input_single > largest) {
            largest = input_single;

        }
        if (input_single < smallest) {
            smallest = input_single;
        }
        cout << "Largest so far: " << largest << " \nSmallest so far: " << smallest << "\n";

    }
    cout << "Part 2 Complete!\n";
}
