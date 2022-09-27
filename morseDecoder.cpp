#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void morseToChar(string);

int main()
{
    cout << "Input Morse:" << endl;
    string morseIn;
    getline(cin, morseIn);
    
    stringstream ss(morseIn);
    string letter;
    while (ss >> letter) {
       morseToChar(letter); 
    }

}

//ew ew ew ew ew ew ew ew ew ew ew ew ew
void morseToChar(string l)
{
        if (l.compare(".-") == 0) {
            cout << 'A';
        }
        else if (l.compare("-...") == 0) {
            cout << 'B';
        }
        else if (l.compare("-.-.") == 0) {
            cout << 'C';
        }
        else if (l.compare("-..") == 0) {
            cout << 'D';
        }
        else if (l.compare(".") == 0) {
            cout << 'E';
        }
        else if (l.compare("..-.") == 0) {
            cout << 'F';
        }
        else if (l.compare("--.") == 0) {
            cout << 'G';
        }
        else if (l.compare("....") == 0) {
            cout << 'H';
        }
        else if (l.compare("..") == 0) {
            cout << 'I';
        }
        else if (l.compare(".---") == 0) {
            cout << 'J';
        }
        else if (l.compare("-.-") == 0) {
            cout << 'K';
        }
        else if (l.compare(".-..") == 0) {
            cout << 'L';
        }
        else if (l.compare("--") == 0) {
            cout << 'M';
        }
        else if (l.compare("-.") == 0) {
            cout << 'N';
        }
        else if (l.compare("---") == 0) {
            cout << 'O';
        }
        else if (l.compare(".--.") == 0) {
            cout << 'P';
        }
        else if (l.compare("--.-") == 0) {
            cout << 'Q';
        }
        else if (l.compare(".-.") == 0) {
            cout << 'R';
        }
        else if (l.compare("...") == 0) {
            cout << 'S';
        }
        else if (l.compare("-") == 0) {
            cout << 'T';
        }
        else if (l.compare("..-") == 0) {
            cout << 'U';
        }
        else if (l.compare("...-") == 0) {
            cout << 'V';
        }
        else if (l.compare(".--") == 0) {
            cout << 'W';
        }
        else if (l.compare("-..-") == 0) {
            cout << 'X';
        }
        else if (l.compare("-.--") == 0) {
            cout << 'Y';
        }
        else if (l.compare("--..") == 0) {
            cout << 'Z';
        }
        else if (l.compare("/") == 0) {
            cout << ' ';
        }
        else {
            cout << "\uFFFD";
        }
}
