#include "std_lib_facilities.h"

constexpr int SEQUENCE_LENGTH = 4;

bool is_in_sequence(vector<int> seq, int v)
{
    for (int e : seq)
    {
        if (v == e)
        {
            return true;
        }
    }
    return false;
}

vector<int> init_sequence(int seed)
{
    seed_randint(seed);

    vector<int> seq(SEQUENCE_LENGTH);

    for (int i = 0; i < SEQUENCE_LENGTH; ++i)
    {
        int v = randint(9);

        bool is_valid = !is_in_sequence(seq, v);

        while (!is_valid)
        {
            v = randint(9);
            is_valid = !is_in_sequence(seq, v);
        }

        seq[i] = v;
    }

    return seq;
}

int main()
{
    // seed
    cout << "Enter a random integer: \n";
    int seed = 0;
    cin >> seed;
    if (cin.fail())
    {
        throw runtime_error("Invalid input.");
    }

    // get sequence
    vector<int> seq = init_sequence(seed);

    // play (not implemented)
}