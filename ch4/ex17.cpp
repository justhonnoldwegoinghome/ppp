#include "std_lib_facilities.h"

string get_min(vector<string> strings)
{
    string min = strings[0];

    for (string s : strings)
    {

        if (s < min)
        {
            min = s;
        }
    }

    return min;
}

string get_max(vector<string> strings)
{
    string max = strings[0];

    for (string s : strings)
    {

        if (s > max)
        {
            max = s;
        }
    }

    return max;
}

string get_mode(vector<string> strings)
{
    string mode = "";
    int mode_count = 0;

    for (string s : strings)
    {
        int count = 0;

        for (string _s : strings)
        {
            if (_s == s)
            {
                ++count;
            }
        }

        if (count > mode_count)
        {
            mode_count = count;
            mode = s;
        }
    }

    return mode;
}

int main()
{
    vector<string> strings = {};

    cout << "Enter a set of strings: \n";

    for (string s; cin >> s;)
    {
        if (s == "|")
        {
            break;
        }
        strings.push_back(s);
    }

    cout << "Min: " << get_min(strings) << "\n";
    cout << "Max: " << get_max(strings) << "\n";
    cout << "Mode: " << get_mode(strings) << "\n";
}