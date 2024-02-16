#include "std_lib_facilities.h"

constexpr double YEN_TO_DOLLARS = 10;
constexpr double KRONER_TO_DOLLARS = 20;
constexpr double POUNDS_TO_DOLLARS = 30;

int main()
{

    double amt = 0;
    char unit = '\0';

    cout << "Enter amount to convert to dollars followed by ccy (y/k/p): \n";
    cin >> amt >> unit;

    switch (unit)
    {
    case 'y':
        cout << "That's " << amt * YEN_TO_DOLLARS << " dollars.\n";
        break;
    case 'k':
        cout << "That's " << amt * KRONER_TO_DOLLARS << " dollars.\n";
        break;
    case 'p':
        cout << "That's " << amt * POUNDS_TO_DOLLARS << " dollars.\n";
        break;
    default:
        cout << "Invalid ccy.\n";
        break;
    }
}
