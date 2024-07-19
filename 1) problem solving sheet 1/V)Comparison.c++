// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '<':
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '>':
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '=':
        if (a == b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    }
}