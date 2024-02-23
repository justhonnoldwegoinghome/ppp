#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time error)
    int i = 0;
    int j = 0;

    while (i < 10)
        ++i;

    if (j < i)
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