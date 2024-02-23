#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time error and logic error)
    // string s = "ape";
    // boo c = "fool" < s;
    // if (c)
    //     cout << "Success!\n";

    // fixed
    string s = "ape";
    bool c = "fool" < s;
    if (!c)
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