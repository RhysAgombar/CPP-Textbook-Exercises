#include "Point.h"
#include <vector>

using namespace std;

int main()
{
    PNS::Point test_point{ 10, 10 };
    cout << "Test Coordinate: ";
    cout << test_point;
    cout << '\n';

    vector<PNS::Point> original_points;

    while (original_points.size() < 7) {
        cout << "Please enter a coordinate in the format '(x (int),y (int))'.\n";
        PNS::Point coord;
        cin >> coord;
        if (cin.fail()) {
            cout << "Invalid Coordinate Format!\n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout.clear();
            continue;
        }
        else {
            cout << "Confirmed: ";
            cout << coord;
            cout << '\n';
            original_points.push_back(coord);
        }
    }

    cout << "Full coord list:\n";
    for (int i = 0; i < original_points.size(); i++) {
        cout << original_points[i] << '\n';
    }
}