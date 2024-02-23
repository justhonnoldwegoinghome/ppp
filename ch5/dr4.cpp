#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time error)
    // cout << success << '\n';

    // fixed
    cout << "Success"
         << "!\n";

    keep_window_open();
    return 0;
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}