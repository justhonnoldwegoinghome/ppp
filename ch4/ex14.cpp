#include "std_lib_facilities.h"

vector<int> get_marked(int num, int max)
{
    vector<int> marked = {};

    int mult = 2;

    while (mult * num <= max)
    {
        marked.push_back(mult * num);
        ++mult;
    }

    return marked;
}

int main()
{
    int max = 100;
    cout << "Enter max: \n";
    cin >> max;

    vector<int> marked = {};

    for (int i = 2; i <= max; ++i)
    {
        vector<int> _marked = get_marked(i, max);

        for (int _m : _marked)
        {
            bool is_marked = false;

            for (int m : marked)
            {
                if (_m == m)
                {
                    is_marked = true;
                    break;
                }
            }

            if (!is_marked)
            {
                marked.push_back(_m);
            }
        }
    }

    for (int i = 2; i <= max; ++i)
    {
        bool is_prime = true;

        for (int m : marked)
        {
            if (i == m)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << i << "\n";
        }
    }
}
