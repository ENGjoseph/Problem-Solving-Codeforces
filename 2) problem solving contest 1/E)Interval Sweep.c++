// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout << "NO";
    }
    else if (a - b == 0 || a - b == 1 || b - a == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}