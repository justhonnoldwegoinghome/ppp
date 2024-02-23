#include "std_lib_facilities.h"

int main()
try
{
    // original (logic error)
    // string s = "Success!\n";
    // for (int i = 0; i < 6; ++i)
    //     cout << s[i];

    // fixed
    string s = "Success!\n";
    for (int i = 0; i < s.size(); ++i)
        cout << s[i];

    keep_window_open();
    return 0;
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}