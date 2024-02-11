#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an integer value: \n";

    string val;
    cin >> val;

    if (val == "zero")
    {
        cout << 0;
    }
    else if (val == "one")
    {
        cout << 1;
    }
    else if (val == "two")
    {
        cout << 2;
    }
    else if (val == "three")
    {
        cout << 3;
    }
    else if (val == "four")
    {
        cout << 4;
    }
    else
    {
        cout << "Not a number I know \n";
    }
}