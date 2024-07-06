#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first and second names.\n";
	string first = "";
	string second = "";
	cin >> first >> second;
	cout << "Hello, " << first << " " << second << "\n";
	cout << "Please enter your age (in years).\n";
	double age = 0.0;
	cin >> age;
	cout << "Your age is " << age * 12 << " in months.\n";
	
	keep_window_open();
	return 0;
}