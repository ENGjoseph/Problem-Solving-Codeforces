// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a ,b ,c, ma, mi;
    cin >> a >> b >> c;
    ma = max(a , b);
    ma = max(ma , c);
    mi = min(a,b);
    mi = min(mi,c);
    cout << mi << " " << ma;
}