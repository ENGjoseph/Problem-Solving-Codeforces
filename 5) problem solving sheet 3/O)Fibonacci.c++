// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    a[1] = 0;
    a[2] = 1;
    if (n == 0)
    {
        cout << "-1";
        return 0;
    }
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n];
}