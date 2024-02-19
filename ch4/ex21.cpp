#include "std_lib_facilities.h"

const vector<string> names = {"Alice", "Bob", "Charlie"};
const vector<int> scores = {100, 200, 100};

int main()
{
    cout << "Enter score : \n";

    for (int s; cin >> s;)
    {
        int idx = -1;

        for (int i = 0; i < scores.size(); ++i)
        {
            if (s == scores[i])
            {
                idx = i;
            }
        }

        if (idx == -1)
        {
            cout << "Score not found.\n";
            continue;
        }
        else
        {
            for (int i = 0; i < scores.size(); ++i)
            {
                if (s == scores[i])
                {
                    cout << names[i] << "\n";
                }
            }
        }
    }
}