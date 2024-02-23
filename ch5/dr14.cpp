#include "std_lib_facilities.h"

int main()
try
{
    // original (no error. but BS probably wanted to do 5 iterations instead of 6.)
    // vector<char> v(5);
    // for (int i = 0; i <= v.size(); ++i)
    //     ;
    // cout << "Success!\n";

    // fixed
    vector<char> v(5);
    for (int i = 0; i < v.size(); ++i)
        ;
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