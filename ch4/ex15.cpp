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
    int n = 1;
    cout << "Enter n: \n";
    cin >> n;

    vector<int> primes = {};
    int candidate = 2;

    while (primes.size() < n)
    {
        bool candidate_is_prime = is_prime(candidate);

        if (candidate_is_prime)
        {
            primes.push_back(candidate);
        }

        ++candidate;
    }

    cout << "Number of primes found: " << primes.size() << "\n";
    for (int p : primes)
    {
        cout << p << "\n";
    }
}