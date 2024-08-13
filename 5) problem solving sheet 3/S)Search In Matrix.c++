// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <iostream>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    long long x;
    cin >> x;
    bool ch = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x == a[i][j])
            {
                ch = 1;
            }
        }
    }
    if (ch == 0)
    {
        cout << "will take number";
    }
    else
    {
        cout << "will not take number";
    }
}