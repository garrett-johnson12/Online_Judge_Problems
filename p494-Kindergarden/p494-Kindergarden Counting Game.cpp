// Online Judge Problem: P494 - Kindergarden Counting Game
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::stringstream;

int main()
{
    // ifstream infile;
    // infile.open("uDebug.txt");
    string inputX, stringX;
    int count = 0;

    while (getline(cin, inputX))
    {
        int sSize = inputX.length();

        for (int i = 0; i < sSize; i++)
        {
            if (!isalpha(inputX[i]) && inputX[i] != ' ')
            {
                inputX.replace(i, 1, " ");
            }
        }

        stringstream X(inputX);
        while (getline(X, stringX, ' '))
        {

            if (stringX != "")
            {
                count++;
            }
        }
        cout << count << endl;
        count = 0;
    }
    // infile.close();
    return 0;
}