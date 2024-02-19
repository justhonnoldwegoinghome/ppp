#include "std_lib_facilities.h"

int main()
{
    cout << "Enter name-score pairs: \n";

    vector<string> names = {};
    vector<int> scores = {};

    string cur_name = "";
    int cur_score = 0;

    while (cin >> cur_name >> cur_score)
    {
        if (cur_name == "NoName" and cur_score == 0)
        {
            break;
        }

        bool is_unique = true;
        for (string n : names)
        {
            if (cur_name == n)
            {
                is_unique = false;
                break;
            }
        }

        if (!is_unique)
        {
            cout << "Error: name has been entered. \n";
        }
        else
        {
            names.push_back(cur_name);
            scores.push_back(cur_score);
        }
    }

    cout << "You have entered: \n";

    for (int i = 0; i < names.size(); ++i)
    {
        cout << "(" << names[i] << ", " << scores[i] << ")\n";
    }
}