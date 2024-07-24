// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
#include <iostream>
using namespace std;
int main()
{
    long long a, x, ans = 0;
    cin >> a;
    long long y = a / 4;
    if (y % 2 == 0)
    {
        x = a % 4;
    }
    else
    {
        x = 3 - (a % 4);
    }
    cout << y << " " << x;
}