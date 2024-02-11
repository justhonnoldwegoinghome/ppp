#include "std_lib_facilities.h"

int main()
{
    cout << "Enter number of pennies: \n";
    int pennies;
    cin >> pennies;

    cout << "Enter number of nickels: \n";
    int nickels;
    cin >> nickels;

    cout << "Enter number of dimes: \n";
    int dimes;
    cin >> dimes;

    cout << "Enter number of quarters: \n";
    int quarters;
    cin >> quarters;

    cout << "Enter number of half-dollars: \n";
    int half_dollars;
    cin >> half_dollars;

    cout << "Enter number of one-dollar: \n";
    int one_dollar;
    cin >> one_dollar;

    cout << "The value of all of your coins is " << pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + one_dollar * 100 << ".\n";
}