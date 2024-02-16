#include "std_lib_facilities.h"

int main()
{
    double val1 = 0;
    double val2 = 0;

    while (cin >> val1 >> val2)
    {
        cout << "You have entered: " << val1 << " and " << val2 << "\n";

        vector<double> v = {val1, val2};
        sort(v);

        cout << "The smaller value is: " << v[0] << "\n";
        cout << "The larger value is: " << v[1] << "\n";

        if (v[1] - v[0] < 1.0 / 100)
        {
            cout << "Both numbers are almost equal\n";
        }
    }

    cout << "Terminated.\n";
}