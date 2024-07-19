// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long e, m, b, c = 0;
    cin >> e >> m >> b;
    long long mn;
    mn = min(min(e,m),b);
    c += mn;
    e -= mn;
    m -= mn;
    b -= mn;
    mn = min(e/2 , b);
    c += mn;
    cout << c;

}