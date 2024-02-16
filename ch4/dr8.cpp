#include "std_lib_facilities.h"

const vector<string> LEGAL_UNITS = {"cm", "m", "in", "ft"};

bool is_legal_unit(string unit)
{
    for (string u : LEGAL_UNITS)
    {
        if (unit == u)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    double val = 0;
    string unit = " ";

    cout << "Enter value followed by unit (cm/m/in/ft): \n";

    cin >> val >> unit;

    if (!is_legal_unit(unit))
    {
        cout << "Illegal unit.\n";
        return 1;
    }

    cout << "You have entered: " << val << " " << unit << "\n";
}