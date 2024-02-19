#include "std_lib_facilities.h"

int get_mode(vector<int> numbers)
{
    int mode = 0;
    int mode_count = 0;

    for (int n : numbers)
    {
        int count = 0;

        for (int _n : numbers)
        {
            if (_n == n)
            {
                ++count;
            }
        }

        if (count > mode_count)
        {
            mode_count = count;
            mode = n;
        }
    }

    return mode;
}

int main()
{
    vector<int> numbers = {};

    cout << "Enter a set of integers: \n";

    for (int i; cin >> i;)
    {
        numbers.push_back(i);
    }

    cout << "Mode: " << get_mode(numbers) << "\n";
}