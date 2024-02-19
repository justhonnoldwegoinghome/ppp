#include "std_lib_facilities.h"

const vector<string> names = {"Alice", "Bob"};
const vector<int> scores = {100, 200};

int main()
{
    cout << "Enter name: \n";

    for (string n; cin >> n;)
    {

        int idx = -1;

        for (int i = 0; i < names.size(); ++i)
        {
            if (n == names[i])
            {
                idx = i;
            }
        }

        if (idx == -1)
        {
            cout << "Score not found.\n";
        }
        else
        {
            cout << scores[idx] << "\n";
        }
    }
}