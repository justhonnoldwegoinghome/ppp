#include "std_lib_facilities.h"

int main()
try
{
    // original (logic error)
    // string s = "ape";
    // if (s == "fool")
    //     cout << "Success!\n";

    // fixed
    string s = "ape";
    if (s != "fool")
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