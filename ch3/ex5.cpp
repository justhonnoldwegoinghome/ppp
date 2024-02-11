#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter two floating-point values: \n";
    double val1 = 0;
    double val2 = 0;
    cin >> val1 >> val2;

    if (val1 == val2)
    {
        cout << "Both values are the same.\n";
    }
    else if (val1 < val2)
    {
        cout << "Larger: " << val2 << "\n";
    }
    else
    {
        cout << "Larger: " << val1 << "\n";
    }
    cout << "Sum: " << val1 + val2 << "\n";
    cout << "Difference (val1 - val2): " << val1 - val2 << "\n";
    cout << "Product: " << val1 * val2 << "\n";
    cout << "Ratio (val1/val2): " << val1 / val2 << "\n";

    return 0;
}