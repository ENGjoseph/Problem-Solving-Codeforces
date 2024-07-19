// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <iostream>
using namespace std;
int main()
{
    long long x, y;
    cin >> x;
    y = x / 1000;
    if (y % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}