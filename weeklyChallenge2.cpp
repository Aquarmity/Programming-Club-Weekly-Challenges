#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main ()
{
    string str;
    int n;
    int outputN = 0;

    cout << "Behold, the magical UpperCaser!\nInput any sentence or word, and it will magically become uppercase!\n";

        getline (cin, str);
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str << "!!\n";

    cout << "For my next trick...\nBehold, the slightly less magical Adder of Numbers!\nInput any number, and it will semi-magically add every number up to and including that number!\n";

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        outputN = outputN + (i + 1);
    }

    cout << outputN;

    cout << "\nNow, for my grand finale... BEHOLD! The very magical Adder of Numbers That Doesn't Use a For Loop!\n it's the same thing as last time but built different lol\n";
    n = 0;
    outputN = 0;

        cin >> n;
        outputN = (n * (n + 1)) / 2;
        cout << outputN;
}