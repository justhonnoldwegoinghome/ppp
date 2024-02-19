#include "std_lib_facilities.h"

int main()
{
    vector<double> distances = {};

    cout << "Enter at least two distances: \n";

    for (double d; cin >> d;)
    {
        distances.push_back(d);
    }

    double total_distance = 0;

    for (double d : distances)
    {
        total_distance += d;
    }

    cout << "Total distance: " << total_distance << " \n";

    sort(distances);
    cout << "Smallest: " << distances[0] << " \n";
    cout << "Largest: " << distances[distances.size() - 1] << " \n";
}