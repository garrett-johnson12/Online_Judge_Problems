// Online Judge Problem: p10055 - Hashmat the Brave Warrior
#include <iostream>
// #include <fstream>
using std::cin;
using std::cout;
using std::endl;
// using std::ifstream;
int main()
{
    // ifstream infile;
    // infile.open("uDebug.txt");
    int has = 0;
    int opp = 0;

    while (cin >> has >> opp)
    {
        cout << abs(opp - has) << endl;
    }
    cout << endl;
    // infile.close();
    return 0;
}