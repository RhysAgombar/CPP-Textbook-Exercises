#include "Point.h"
#include <vector>
#include <fstream>


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

    string file_path = "mydata.txt";
    ofstream output_fs(file_path);
    if (output_fs.is_open()) {
        for (int i = 0; i < original_points.size(); i++) {
            output_fs << original_points[i] << '\n';
        }
        output_fs.close();
    }
    else {
        cerr << "Error opening the file.\n" ;
    }


    ifstream input_fs(file_path);
    if (!input_fs) cerr << "Error opening the file.\n";


    vector<PNS::Point> file_points;
    if (input_fs.is_open()) {
        PNS::Point new_point;
        while (input_fs >> new_point) {
            file_points.push_back(new_point);
        }
        input_fs.close();
    }
    else {
        cerr << "Error opening the file.\n";
    }

    if (file_points.size() != original_points.size()) {
        cerr << "Something is wrong!\n";
    }
    else {
        for (int i = 0; i < file_points.size(); i++) {
            cout << "Original Point: " << original_points[i] 
                 << ", File Point: " << file_points[i] << '\n';
        }
    }
    
    return 0;
}