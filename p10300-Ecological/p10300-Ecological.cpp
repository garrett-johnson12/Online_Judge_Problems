// Online Judge Problem: p10071 - Ecological Premium
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
    int n, f;
    long long farms_size, animal_amt, environ_friendliness;
    long long sum = 0;
    while (cin >> n)
    {
        // cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> f;
            for (int j = 0; j < f; j++)
            {
                cin >> farms_size >> animal_amt >> environ_friendliness;
                sum += farms_size*environ_friendliness;
            }
            cout << sum << endl;
            sum = 0;
        }
    }
    // infile.close();
    return 0;
}