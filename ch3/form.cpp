#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to \n";
    string first_name;
    cin >> first_name;
    cout << "Dear, " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\n";

    cout << "Enter the name of your friend \n";
    string friend_name;
    cin >> friend_name;
    cout << "Enter the sex of your friend (m for male) \n";
    char friend_sex = '0';
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    };
    if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    cout << "Enter your age \n";
    int age;
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (age == 0 or age == 110)
    {
        simple_error("you're kidding!\n");
    }
    else if (age < 12)
    {
        cout << "Next year you will be " << age + 1 << "\n";
    }
    else if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    else if (age > 70)
    {
        cout << "I hope you are enjoying retirement!\n";
    }

    cout << "Yours sincerely,\n"
         << "WT";
}
