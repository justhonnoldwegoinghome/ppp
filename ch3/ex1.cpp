#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your name: \n";
    string name = "";
    cin >> name;

    cout << "Hello, " << name << " !\n";
    cout << "Please enter your age (in years): \n";
    double age_years = 0;
    cin >> age_years;

    cout << "You are " << age_years * 12 << " months old!\n";

    return 0;
}