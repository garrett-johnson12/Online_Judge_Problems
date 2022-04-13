// Online Judge Problem: P445 - Marvelous Mazes
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
    string maze_str;
    int sum = 0;
    while (std::getline(cin, maze_str))
    {
        if (maze_str == "")
        {
            cout << endl;
        }
        else
        {
            for (int i = 0; i < maze_str.length(); i++)
            {
                if (maze_str[i] == '!')
                {
                    cout << endl;
                }
                else if (isdigit(maze_str[i]))
                {
                    sum += maze_str[i] - 48;
                }
                else
                {
                    for (int j = 0; j < sum; j++)
                    {
                        if (maze_str[i] == 'b')
                        {
                            cout << " ";
                        }
                        else
                        {
                            cout << maze_str[i];
                        }
                    }
                    sum = 0;
                }
            }
            cout << endl;
        }
    }

    // infile.close();
    return 0;
}