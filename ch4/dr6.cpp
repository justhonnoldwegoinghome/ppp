#include "std_lib_facilities.h"

int main()
{
    double smallest = 0;
    double largest = 100;

    double val = 0;
    while (cin >> val)
    {
        cout << "You have entered: " << val << "\n";

        if (val < smallest)
        {
            cout << "Which is the smallest so far \n";
            smallest = val;
        }
        else if (val > largest)
        {
            cout << "Which is the largest so far \n";
            largest = val;
        }
    }

    cout << "Terminated. \n";
}