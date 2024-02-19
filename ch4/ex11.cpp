#include "std_lib_facilities.h"

const vector<int> primes = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97};

bool is_prime(int num)
{
    for (int p : primes)
    {
        if (num == p)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> my_primes = {};

    for (int i = 1; i <= 100; ++i)
    {
        if (is_prime(i))
        {
            my_primes.push_back(i);
        }
    }

    cout << "My primes: \n";

    for (int mp : my_primes)
    {
        cout << mp << "\n";
    }
}