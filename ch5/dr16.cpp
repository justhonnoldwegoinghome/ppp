#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time error)
    // if (true)
    //     then cout << "Success!\n";
    // else
    //     cout << "Fail!\n";

    // fixed
    if (true)
        cout << "Success!\n";
    else
        cout << "Fail!\n";

    keep_window_open();
    return 0;
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}