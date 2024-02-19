#include "std_lib_facilities.h"

double calc_num_grains(int num_squares)
{
    double num_grains = 1;

    int s = 1;

    if (num_squares < 1)
    {
        return -1;
    }
    else
    {
        while (s < num_squares)
        {
            num_grains *= 2;
            ++s;
        }

        return num_grains;
    }
}

int main()
{
    cout << calc_num_grains(1024) << "\n";
}

// largest number of squares (using an `int`): 31
// largest number of squares (using a `double`): 1024