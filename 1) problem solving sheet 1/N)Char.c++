// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int asciiValue = (int)c;
    if (asciiValue >= 65 && asciiValue < 91)
    {
        asciiValue = asciiValue + 32;
        char letter = (char)asciiValue;
        cout << letter;
    }
    else if (asciiValue >= 97 && asciiValue < 123)
    {
        asciiValue = asciiValue - 32;
        char letter = (char)asciiValue;
        cout << letter;
    }
}