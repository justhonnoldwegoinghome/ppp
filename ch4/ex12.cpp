#include "std_lib_facilities.h"

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    cout << "Enter max: \n";

    int max = 2;

    if (cin >> max)
    {
        for (int i = 0; i <= max; ++i)
        {
            cout << i << " " << is_prime(i) << "\n";
        }
    };
}