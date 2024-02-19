#include "std_lib_facilities.h"

double get_median(vector<double> seq)
{

    sort(seq);

    if (seq.size() == 0)
    {
        return 0.0;
    }
    else if (seq.size() == 1)
    {
        return seq[0];
    }
    else if (seq.size() % 2 != 0)
    {
        return seq[floor(seq.size() / 2)];
    }
    else
    {
        return (seq[seq.size() / 2 - 1] + seq[seq.size() / 2]) / 2;
    }
}

int main()
{
    cout << "Enter values: \n";

    vector<double> seq = {};

    for (double val; cin >> val;)
    {
        seq.push_back(val);
        cout << "Median: " << get_median(seq) << "\n";
    }
}