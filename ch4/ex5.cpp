#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two operands followed by one operator: \n";

    double val1 = 0;
    double val2 = 0;
    char op = '+';

    while (cin >> val1 >> val2 >> op)
    {

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
            cout << "Invalid operator.\n";
            break;
        }
    }
}