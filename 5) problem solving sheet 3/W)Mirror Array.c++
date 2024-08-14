// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    long long a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
            if (j == 0)
            {
                cout << endl;
            }
        }
    }
}