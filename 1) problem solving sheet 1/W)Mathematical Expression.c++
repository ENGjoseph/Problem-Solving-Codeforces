// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char s , q;
    long long c;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
        break;
    case '-':
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
        break;
    case '*':
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
        break;
    }
}