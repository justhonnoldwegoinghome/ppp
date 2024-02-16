#include "std_lib_facilities.h"

int square_int(int val)
{
    int sum = 0;

    for (int i = 0; i < val; ++i)
    {
        sum += val;
    }

    return sum;
}

int main()
{
    for (int i = 0; i < 100; ++i)
    {
        cout << i << " " << square_int(i) << "\n";
    }
}