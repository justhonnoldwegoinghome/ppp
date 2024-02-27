#include "std_lib_facilities.h"

bool is_overflow(int acc, int cur)
{
    if (cur > 0)
    {
        if (acc + cur <= acc)
        {
            return true;
        }
    }
    else if (cur < 0)
    {
        if (acc + cur >= acc)
        {
            return true;
        }
    }
    return false;
}

int sum(vector<int> values, int n)
{
    // pre condition: 0 <= n <= length of values
    if (n > values.size() || n < 0)
    {
        throw out_of_range("N is out of range.");
    }

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        int v = values[i];
        if (is_overflow(result, v))
        {
            throw runtime_error("Overflow");
        }
        else
        {

            result += v;
        }
    }
    return result;
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
        int result = sum(values, n);
        cout
            << "Sum: " << result << "\n";
    }
    catch (out_of_range &e)
    {
        throw e;
    }
}