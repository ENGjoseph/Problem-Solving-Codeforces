// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <iostream>
using namespace std;
int main()
{
    long long x;
    bool f = 0;
    cin >> x;
    long long t = x - 1;
    while (f == 0 && t > 0)
    {
        if (x % t == 0 && t != 1)
        {
            f = 1;
            cout << "NO";
            return 0;
        }
        else
        {
            t--;
        }
    }
    if (x > 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}