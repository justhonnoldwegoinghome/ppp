#include "std_lib_facilities.h"

int sum(vector<int> values, int n)
{
    // pre condition: 0 <= n <= length of values
    if (n > values.size() || n < 0)
    {
        throw out_of_range("N is out of range.");
    }

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += values[i];
    }
    return sum;
}

int main()
{
    // get N
    int n = 0;
    cout << "Enter the number of values you want to sum: \n";
    cin >> n;
    if (cin.fail())
    {
        throw invalid_argument("Invalid N.");
    }

    // get list of integers
    vector<int> values = {};
    cout << "Enter some integers (press '|' to stop): \n";
    for (int i; cin >> i;)
    {
        values.push_back(i);
    };
    try
    {
        cout << "Sum: " << sum(values, n) << "\n";
    }
    catch (out_of_range &e)
    {
        throw e;
    }
}