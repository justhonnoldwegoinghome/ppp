#include "std_lib_facilities.h"

const vector<string> LEGAL_UNITS = {"cm", "m", "in", "ft"};
double CM_TO_METERS = 100;
double IN_TO_METERS = 0.0254;
double FT_TO_METERS = 0.3048;

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

double to_meters(double val, string unit)
{
    if (unit == "m")
        return val;
    else if (unit == "cm")
        return val / CM_TO_METERS;
    else if (unit == "in")
        return val / IN_TO_METERS;
    else if (unit == "ft")
        return val / FT_TO_METERS;

    // else raise error
    return 1;
}

int main()
{
    double smallest_in_meters = 0;
    double largest_in_meters = 0;
    double sum_in_meters = 0;
    vector<double> values = {};

    double val = 0;
    string unit = "";

    cout << "Enter value followed by unit (cm/m/in/ft): \n";

    while (cin >> val >> unit)
    {
        if (is_legal_unit(unit))
        {
            double val_in_meters = to_meters(val, unit);

            if (val_in_meters < smallest_in_meters)
            {
                smallest_in_meters = val_in_meters;
            }
            else if (val_in_meters > largest_in_meters)
            {
                largest_in_meters = val_in_meters;
            }

            values.push_back(val_in_meters);
            sum_in_meters += val_in_meters;
        }
        else
        {
            cout << "Illegal unit. \n";
        }
    }

    cout << "You have entered: " << values.size() << " values. \n";
    cout << "Smallest value (in meters): " << smallest_in_meters << ".\n";
    cout << "Largest value (in meters): " << largest_in_meters << ".\n";
    cout << "Sum (in meters): " << sum_in_meters << ".\n";
    cout << "Values are: \n";
    for (double v : values)
    {
        cout << v << "\n";
    }
}