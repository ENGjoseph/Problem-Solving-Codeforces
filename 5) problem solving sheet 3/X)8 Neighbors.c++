// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include <iostream>
using namespace std;
int main()
{
    long long n,m,a,b;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> a >> b;
    a--;
    b--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i != a && j != m)
            {
                if (arr[i][j] != 'x')
                {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
    cout << "yes";
}