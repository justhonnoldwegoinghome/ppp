#include "std_lib_facilities.h"

/*
Note 1:
Cannot concatenate string literals. But we can concatenate a string and a string literal.
https : // stackoverflow.com/questions/6061648/concatenate-two-string-literals

Note 2:
String is not implicitly converted to boolean.
https://stackoverflow.com/questions/28226967/why-stdstring-is-not-implicitly-converted-to-bool
*/

int main()
try
{
    // original (compile-time error and logic error)
    // string s = "ape";
    // if (s + "fool")
    //     cout < "Success!\n";

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