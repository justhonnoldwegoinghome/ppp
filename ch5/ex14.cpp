// Read (day-of-the-week,value) pairs from standard input. For example:
// Tuesday 23 Friday 56 Tuesday –3 Thursday 99
// Collect all the values for each day of the week in a vector<int>. Write out
// the values of the seven day-of-the-week vectors. Print out the sum of the
// values in each vector. Ignore illegal days of the week, such as Funday,
// but accept common synonyms such as Mon and monday. Write out the
// number of rejected values.

// Defer I/O error handling to chapter 10.

#include "std_lib_facilities.h"

int MAX_STREAM_SIZE = 1000;

int sum(vector<int> values)
{
    int sum = 0;
    for (int v : values)
    {
        sum += v;
    }
    return sum;
}

int main()
{

    vector<int> mon = {};
    vector<int> tue = {};
    vector<int> wed = {};
    vector<int> thu = {};
    vector<int> fri = {};
    vector<int> sat = {};
    vector<int> sun = {};

    int num_rejections = 0;

    string cur_day = "";
    int cur_val = 0;

    cout << "Enter (day-of-the-week, value) pairs (terminate using '|'): \n";

    while (true)
    {

        cin >> cur_day;

        cout << "cur_day " << cur_day << "\n";

        if (cur_day == "|")
        {
            break;
        }

        cin >> cur_val;
        cout << "cur_val " << cur_val << "\n";

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(MAX_STREAM_SIZE, ' ');
            ++num_rejections;
            continue;
        }
        else
        {
            if (cur_day == "Monday" || cur_day == "mon" || cur_day == "monday")
            {
                mon.push_back(cur_val);
            }
            else if (cur_day == "Tuesday" || cur_day == "tue" || cur_day == "tuesday")
            {
                tue.push_back(cur_val);
            }
            else if (cur_day == "Wednesday" || cur_day == "wed" || cur_day == "wednesday")
            {
                wed.push_back(cur_val);
            }
            else if (cur_day == "Thursday" || cur_day == "thu" || cur_day == "thursday")
            {
                thu.push_back(cur_val);
            }
            else if (cur_day == "Friday" || cur_day == "fri" || cur_day == "friday")
            {
                fri.push_back(cur_val);
            }
            else if (cur_day == "Saturday" || cur_day == "sat" || cur_day == "saturday")
            {
                sat.push_back(cur_val);
            }
            else if (cur_day == "Sunday" || cur_day == "sun" || cur_day == "sunday")
            {
                sun.push_back(cur_val);
            }
            else
            {
                ++num_rejections;
                continue;
            }
        }
    }

    cout << "Number of rejections: " << num_rejections << "\n";
    cout << "Monday: " << sum(mon) << "\n";
    cout << "Tuesday: " << sum(tue) << "\n";
    cout << "Wednesday: " << sum(wed) << "\n";
    cout << "Thursday: " << sum(thu) << "\n";
    cout << "Friday: " << sum(fri) << "\n";
    cout << "Saturday: " << sum(sat) << "\n";
    cout << "Sunday: " << sum(sun) << "\n";
}