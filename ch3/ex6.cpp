#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three integer values: \n";
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
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