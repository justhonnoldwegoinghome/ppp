#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an integer value: \n";

    int val;

    cin >> val;

    if (val % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}