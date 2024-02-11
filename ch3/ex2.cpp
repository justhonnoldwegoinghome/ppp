#include "std_lib_facilities.h"

int main()
{

    cout << "Enter distance in miles: \n";
    double miles = 0;
    cin >> miles;

    cout << "That's " << miles * 1.609 << " kilometers.\n";
    return 0;
}