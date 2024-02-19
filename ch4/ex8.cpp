#include "std_lib_facilities.h"

int calc_num_squares(int target_num_grains)
{
    int num_squares = 1;
    int num_grains = 1;

    while (num_grains < target_num_grains)
    {
        cout << "num_squares: " << num_squares << "\n";
        cout << "num_grains: " << num_grains << "\n";

        ++num_squares;
        num_grains *= 2;
    }

    return num_squares;
}

int main()
{
    cout << calc_num_squares(1000) << "\n";
    cout << calc_num_squares(1000000) << "\n";
    cout << calc_num_squares(1000000000) << "\n";
}