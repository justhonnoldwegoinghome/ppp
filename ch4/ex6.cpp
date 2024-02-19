#include "std_lib_facilities.h"

vector<string> digit_strings = {
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
};

int get_digit(string digit_string)
{
    for (int i; i < digit_strings.size(); ++i)
    {
        if (digit_strings[i] == digit_string)
        {
            return i + 1;
        }
    }
    return -1;
}

string get_digit_string(int digit)
{
    if (digit <= digit_strings.size() and digit >= 1)
    {
        return digit_strings[digit - 1];
    }
    return "Invalid digit.";
}

int main()
{
    int user_input_digit = 0;
    string user_input_digit_string = "";

    bool is_terminated = false;

    while (!is_terminated)
    {

        cout << "Enter digit: \n";

        cin >> user_input_digit;
        if (cin.fail())
        {
            cin.clear();
            cin >> user_input_digit_string;

            if (user_input_digit_string == "|")
            {
                is_terminated = true;
                break;
            }
            else
            {
                cout << get_digit(user_input_digit_string) << "\n";
            }
        }
        else
        {
            cout << get_digit_string(user_input_digit) << "\n";
        }
    }
}