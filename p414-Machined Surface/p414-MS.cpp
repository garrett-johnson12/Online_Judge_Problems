#include <iostream>
// #include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
// using std::ifstream;
using std::string;

int main()
{
    // ifstream infile;
    // infile.open("uDebug.txt");
    int N, M = 25;
    int min_dst = -1;
    int sum;
    string inputX;

    while (cin >> N)
    {
        if (N != 0)
        {
            int *cnt = new int[N];
            sum = 0;
            getline(cin, inputX);
            for (int i = 0; i < N; i++)
            {
                cnt[i] = 0;

                cin.clear();
                getline(cin, inputX);
                for (int j = 0; j < M; j++)
                {
                    if (inputX[j] == ' ')
                    {
                        cnt[i]++;
                    }
                }
                sum += cnt[i];
                if (i == 0)
                {
                    min_dst = cnt[0];
                }
                else if (cnt[i] < min_dst)
                {
                    min_dst = cnt[i];
                }
            }
            cout << sum - min_dst * N << endl;
        }
        else
        {
            break;
        }
    }
    // infile.close();
    return 0;
}