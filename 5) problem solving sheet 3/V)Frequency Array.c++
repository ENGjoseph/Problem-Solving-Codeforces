// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    long long a[m + 1];
    for (int i = 0; i < m; i++)
    {
        a[i] = 0;
    }
    long long x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << a[i] << endl;
    }
    
}