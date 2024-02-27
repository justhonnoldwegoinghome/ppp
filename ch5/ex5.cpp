#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{

    if (c < -273.15)
        error("Too cold!");

    double k = c + 273.15;
    return k;
}

double ktoc(double k) // converts Kelvin to Celsius
{
    if (k < -0)
        error("Too cold!");

    double c = k - 273.15;
    return c;
}

int main()
{
    int mode = 0;
    double temp = 0;

    cout << "Enter 0 to convert Celsius to Kelvin; 1 to convert Kelvin to Celsius: \n";

    if (cin >> mode)
    {
        switch (mode)
        {
        case 0:
            cout << "Enter temperature in Celsius: \n";
            cin >> temp;
            cout << ctok(temp) << " Kelvin\n";
            break;
        case 1:
            cout << "Enter temperature in Kelvin: \n";
            cin >> temp;
            cout << ktoc(temp) << " Celsius\n";
            break;
        default:
            error("Invalid mode \n");
        }
    }
}