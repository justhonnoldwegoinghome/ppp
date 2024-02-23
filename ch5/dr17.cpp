#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time warning)
    // int x = 2000;
    // char c = x;
    // if (c == 2000)
    //     cout << "Success!\n";

    // fixed
    int x = 2000;
    int c = x;
    if (c == 2000)
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