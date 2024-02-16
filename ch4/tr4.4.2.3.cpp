#include "std_lib_facilities.h"

int main()
{
    for (int i = int('a'); i <= int('z'); ++i)
    {
        cout << char(i) << " " << i << "\n";
    }

    for (int i = int('A'); i <= int('Z'); ++i)
    {
        cout << char(i) << " " << i << "\n";
    }

    for (int i = int('0'); i <= int('9'); ++i)
    {
        cout << char(i) << " " << i << "\n";
    }
}