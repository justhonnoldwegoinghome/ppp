#include "std_lib_facilities.h"

int main()
{
    double val = 0;
    string unit = " ";

    cout << "Enter value followed by unit (cm/m/in/ft): \n";

    cin >> val >> unit;

    cout << "You have entered: " << val << " " << unit << "\n";
}