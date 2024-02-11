#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an operator: \n";
    string operation;
    cin >> operation;

    cout << "Enter two operands: \n";
    double val1;
    double val2;
    cin >> val1 >> val2;

    if (operation == "+" or operation == "plus")
    {
        cout << val1 + val2;
    }
    else if (operation == "-" or operation == "minus")
    {
        cout << val1 - val2;
    }
    else if (operation == "*" or operation == "mul")
    {
        cout << val1 * val2;
    }
    else if (operation == "/" or operation == "div")
    {
        cout << val1 / val2;
    }
    else
    {
        cout << "Invalid operator";
    }
}