// Online Judge Problem: p10055 - Hashmat the Brave Warrior
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

    long long has, opp;

    while (cin >> has >> opp)
    {
        if (has < opp)
        {
            cout << opp - has << endl;
        }
        else
        {
            cout << has - opp << endl;
        }
    }

    // While not accepted by online judge this does generate the same answers
    // while (cin >> has >> opp)
    // {
    //     cout << abs(opp - has) << endl;
    // }
    return 0;
}