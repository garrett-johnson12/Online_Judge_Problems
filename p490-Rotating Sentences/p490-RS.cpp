// Online Judge Problem: P490 - Rotating Sentence
#include <iostream>
// #include <fstream>s
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
// using std::ifstream;
using std::string;
using std::vector;
int main()
{
    // ifstream infile;
    // infile.open("uDebug.txt");
    int max_sent_size = 0;
    int count = 0;
    string input = "";
    vector<char> sentence;
    vector<vector<char>> sentences;

    while (std::getline(cin, input))
    {
        for (int i = 0; i < input.length(); i++)
        {
            sentence.push_back(input[i]);
        }
        sentences.push_back(sentence);
        if (max_sent_size < sentence.size())
        {
            max_sent_size = sentence.size();
        }
        sentence.clear();
    }

    while (count < max_sent_size)
    {

        for (int i = sentences.size() - 1; i >= 0; i--)
        {
            if (sentences[i].size() < max_sent_size && count >= sentences[i].size())
            {
                cout << " ";
            }
            else
            {
                cout << sentences[i][count];
            }
        }
        cout << endl;
        count++;
    }
    // infile.close();
    return 0;
}