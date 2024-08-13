// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
#include <iostream>
using namespace std;
int main()
{
    long long n,m;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long z = 0, counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[z])
        {
            z++;
            counter++;
        }
        
    }
    if (counter == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}