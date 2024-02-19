#include "std_lib_facilities.h"

int main()
{
    cout << "Think of a number between 1 and 100 (exclusive).\n";

    int upper = 100;
    int lower = 1;

    while (upper - lower > 2)
    {
        cout << "Upper: " << upper << "\n";
        cout << "Lower: " << lower << "\n";

        double mid = floor((upper + lower) / 2);

        cout << "Is the number larger than " << mid << "? (y/n) \n";

        string res = "n";
        cin >> res;

        if (res == "y")
        {
            lower = mid;
        }
        else
        {
            upper = mid;
        }
    }
    cout << "Your number is " << lower + 1;
}