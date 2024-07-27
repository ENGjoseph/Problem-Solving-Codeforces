// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long t = n - 1, i = 0;
    while (a[t] == a[i])
    {
        if (i == n / 2)
        {
            cout << "YES";
            return 0;
        }
        t--;
        i++;
    }
    cout << "NO";
}