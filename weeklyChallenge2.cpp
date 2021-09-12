#include <iostream>
#include <ctype.h>
using namespace std;

int main ()
{
    char input;

    while (true)
    {
        cin >> input;
        toupper (input);
        cout << input << "!!";
    }
}