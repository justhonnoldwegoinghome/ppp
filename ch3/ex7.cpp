#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three string values: \n";
    string val1 = "";
    string val2 = "";
    string val3 = "";
    cin >> val1 >> val2 >> val3;

    if (val1 <= val2 and val1 <= val3)
    {
        if (val2 <= val3)
        {
            cout << val1 << ", " << val2 << ", " << val3;
        }
        else
        {
            cout << val1 << ", " << val3 << ", " << val2;
        }
    }
    else if (val2 <= val1 and val2 <= val3)
    {
        if (val1 <= val3)
        {
            cout << val2 << ", " << val1 << ", " << val3;
        }
        else
        {
            cout << val2 << ", " << val3 << ", " << val1;
        }
    }
    else
    {
        if (val1 <= val2)
        {
            cout << val3 << ", " << val1 << ", " << val2;
        }
        else
        {
            cout << val3 << ", " << val2 << ", " << val1;
        }
    }
}