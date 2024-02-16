#include "std_lib_facilities.h"

const vector<string> DISLIKED_WORDS = {"Lakers", "Suns"};

int main()
{

    cout << "Enter a word: \n";

    string w = "";
    while (cin >> w)
    {
        bool is_disliked = false;

        for (string d : DISLIKED_WORDS)
        {
            if (d == w)
            {
                is_disliked = true;
                break;
            }
        }

        if (is_disliked)
        {
            cout << "BLEEP \n";
        }
        else
        {
            cout << w << "\n";
        }
    }
}