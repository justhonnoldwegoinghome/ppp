#include "std_lib_facilities.h"

int main()
{
    // ok
    char x = 'x';
    int a = x;
    cout << a << "\n";

    // ok
    int b = 120;
    char y = b;
    cout << y << "\n";

    // not ok
    int c = 1000;
    char z = c;
    cout << z << "\n";

    // using {}
    int d = 1000;
    char z2{d};
    cout << z2 << "\n";
}