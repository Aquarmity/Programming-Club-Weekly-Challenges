#include <iostream>
#include <string>
using namespace std;

int main()
{
  int num;
  int space;

  while (true)
  {
    cin >> num;
    space = num;

    if (num > 100)
    {
      cout << "Woah there buddy, that's a biiiiig number. Calm down fella. \n";
    }
    else
    {
      cout << num << "\n";
      for (int i = 0; i < num; i++)
      {
        string spaceTri (space--, ' ');
        cout << spaceTri;

        string tri (i * 2 + 1, '*');
        cout << tri << "\n";
      }
    }
  }
}