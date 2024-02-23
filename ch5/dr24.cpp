#include "std_lib_facilities.h"

int main()
try
{
    // original (warning: using the result of an assignment as a condition without parentheses)
    // int x = 4;
    // double d = 5 / (x - 2);
    // if (d = 2 * x + 0.5)
    //     cout << "Success!\n";

    // fixed
    int x = 4;
    double d = 5 / (x - 2);
    if (d < 2 * x + 0.5)
        cout << "Success!\n";

    keep_window_open();
    return 0;
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}