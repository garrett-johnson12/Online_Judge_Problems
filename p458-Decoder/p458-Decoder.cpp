// Online Judge Problem: P458 - The Decoder
#include <iostream>
#include <string>
// #include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
// using std::ifstream;
int main()
{
    // ifstream infile;
    // infile.open("uDebug.txt");
    int stringCount = 0;
    string inputX;
    while (cin >> inputX)
    {
        while (stringCount < inputX.length())
        {
            inputX[stringCount] -= 7;
            stringCount++;
        }
        cout << inputX << endl;
        stringCount = 0;
    }
    // infile.close();
    return 0;
}