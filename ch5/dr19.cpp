#include "std_lib_facilities.h"

int main()
try
{
    // original (compile-time error)
    // vector v(5);
    // for (int i = 0; i <= v.size(); ++i)
    //     ;
    // cout << "Success!\n";

    // fixed
    vector<int> v(5);
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