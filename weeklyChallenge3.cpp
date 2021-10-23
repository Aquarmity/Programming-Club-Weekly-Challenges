#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

const vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
const vector<char> consonants{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

int main()
{
    int s = 0;
    int x;
    string notPig;
    getline(cin, notPig);
    notPig = notPig + ' ';

    //position in the array will be its position in the length + 1 hmm
    int length = notPig.length();
    char sep[length];
    vector<int> spacePos{-1};

    for (int i = 0; i < length; i++)
    {
        sep[i] = notPig[i];
        if (sep[i] == ' ')
        {
           spacePos.push_back(i);
        }
    }

    for (int i = 0; i < length; i++)
    {
        x = 1;
        if (find(spacePos.begin(), spacePos.end(), i - 1) != spacePos.end())
        {
            if (find(vowels.begin(), vowels.end(), sep[i]) != vowels.end())
            {
                for (int k = i; k < spacePos[s + 1]; k++)
                {
                    cout << sep[k];
                }
                cout << "ay ";
                s++;
            }
            else if (find(consonants.begin(), consonants.end(), sep[i]) != consonants.end())
                {
                    for (int k = i + 1; k < spacePos[s + 1] && find(consonants.begin(), consonants.end(), sep[k]) != consonants.end(); k++)
                    {
                        if (find(consonants.begin(), consonants.end(), sep[k]) != consonants.end())
                        {
                            x++;
                        }
                    }
                    for (int m = i + x; m < spacePos[s + 1]; m++)
                    {
                        cout << sep[m];
                    }
                    for (int n = i; n < i + x; n++)
                    {
                        cout << sep[n];
                    }
                    cout << "ay ";
                    s++;
                }
        }
    }
    
}