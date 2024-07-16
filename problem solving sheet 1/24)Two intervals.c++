// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include <iostream>
using namespace std;
int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    long long f = max(l1, l2);
    long long l = min(r1, r2);
    if (f <= l)
    {
        cout << f << " " << l;
    }
    else 
    {
        cout << -1;
    }
}