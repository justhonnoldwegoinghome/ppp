#include "std_lib_facilities.h"

constexpr char FIRST_CHAR = 'a';
constexpr char LAST_CHAR = 'z';

int main()
{
    int last_char_int = int(LAST_CHAR);

    int char_int = int(FIRST_CHAR);

    while (char_int <= last_char_int)
    {
        cout << char(char_int) << " " << char_int << "\n";
        ++char_int;
    }
}