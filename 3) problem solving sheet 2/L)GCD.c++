// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include <iostream>
using namespace std;
int main()
{
    long long a, b, max = 0, t;
    cin >> a >> b;
    if (a >= b)
    {
        t = a;
    }
    else
    {
        t = b;
    }
    for (int i = 1; i <= t; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            max = i;
        }
    }
    cout << max;
}