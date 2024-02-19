#include "std_lib_facilities.h"

constexpr int SEQUENCE_LEN = 8;

vector<string> init_sequence()
{

    vector<string> seq = {};

    int rand = 1;

    cout << "Enter a random positive integer: \n";

    if (cin >> rand)
    {
        while (seq.size() < SEQUENCE_LEN)
        {
            if (seq.size() % 2 == 0)
            {
                seq.push_back("scissors");
            }
            else
            {

                vector<string> _seq = {"rock", "paper", "scissors"};
                seq.push_back(_seq[rand % 3]);
            }
        }
    };

    return seq;
}

string get_computer_action(vector<string> seq, int game_count)
{
    return seq[game_count % seq.size()];
}

int main()
{
    vector<string> seq = init_sequence();

    int game_count = 0;
    string user_action = "";

    cout << "Enter your action: \n";

    while (cin >> user_action)
    {
        if (user_action == "|")
        {
            cout << "Game over. \n";
            return -1;
        }
        else
        {
            string computer_action = get_computer_action(seq, game_count);

            cout << "User action: " << user_action << "\n";
            cout << "Computer action: " << computer_action << "\n";

            switch (char(user_action[0]))
            {
            case 'r':
                switch (char(computer_action[0]))
                {
                case 'r':
                    cout << "Draw! \n";
                    break;
                case 'p':
                    cout << "Computer wins! \n";
                    break;
                case 's':
                    cout << "User wins! \n";
                    break;
                default:
                    break;
                }
                break;
            case 'p':
                switch (char(computer_action[0]))
                {
                case 'r':
                    cout << "User wins! \n";
                    break;
                case 'p':
                    cout << "Draw! \n";
                    break;
                case 's':
                    cout << "Computer wins! \n";
                    break;
                default:
                    break;
                }
                break;
            case 's':
                switch (char(computer_action[0]))
                {
                case 'r':
                    cout << "Computer wins! \n";
                    break;
                case 'p':
                    cout << "User wins! \n";
                    break;
                case 's':
                    cout << "Draw! \n";
                    break;
                default:
                    break;
                }
                break;
            default:
                cout << "Invalid action.\n";
                break;
            }
            ++game_count;
        }
    }
}