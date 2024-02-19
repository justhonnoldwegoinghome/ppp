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

int parse_user_input()
{
    int user_input_digit = 0;
    string user_input_digit_string = "";

    cin >> user_input_digit;
    if (cin.fail())
    {
        cin.clear();
        cin >> user_input_digit_string;

        if (user_input_digit_string == "|")
        {
            return -1;
        }
        else
        {
            return get_digit(user_input_digit_string);
        }
    }
    else if (user_input_digit < 0 or user_input_digit > 9)
    {
        return -1;
    }
    else
    {
        return user_input_digit;
    }
}

int main()
{
    cout << "Enter two operands (single digits) followed by one operator: \n";

    bool is_terminated = false;

    while (!is_terminated)
    {
        double val1 = parse_user_input();
        double val2 = parse_user_input();
        char op = 0;

        cin >> op;

        if (val1 == -1 || val2 == -1)
        {
            is_terminated = true;
            cout << "Invalid operand(s).\n";
            break;
        }

        switch (op)
        {
        case '+':
            cout << "Result: " << val1 + val2 << "\n";
            break;
        case '-':
            cout << "Result: " << val1 - val2 << "\n";
            break;
        case '*':
            cout << "Result: " << val1 * val2 << "\n";
            break;
        case '/':
            cout << "Result: " << val1 / val2 << "\n";
            break;
        default:
            is_terminated = true;
            cout << "Invalid operator.\n";
            break;
        }
    }
}