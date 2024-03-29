#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{

    if (c < -273.15)
        error("Too cold!");

    double k = c + 273.15;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << "\n";
}