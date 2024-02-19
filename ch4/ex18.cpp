#include "std_lib_facilities.h"

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << "Enter a: \n";
    cin >> a;

    cout << "Enter b: \n";
    cin >> b;

    cout << "Enter c: \n";
    cin >> c;

    double determinant = b * b - 4 * a * c;

    if (determinant < 0)
    {
        cout << "No solution.\n";
    }
    else if (determinant == 0)
    {
        cout << "Root one: " << -b / (2 * a) << "\n";
    }
    else
    {
        cout << "Root one: " << (-b + sqrt(determinant)) / (2 * a) << "\n";
        cout << "Root two: " << (-b - sqrt(determinant)) / (2 * a) << "\n";
    }
}