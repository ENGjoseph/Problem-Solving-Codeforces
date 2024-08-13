// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n][n], suma = 0, sumb = 0, sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == j)
            {
                suma += a[i][j];
            }
            if (i + j == n - 1)
            {
                sumb += a[i][j];
            }
        }
    }
    sum = suma - sumb;
    if (sum < 0)
    {
        sum *= -1;
    }
    cout << sum;
}