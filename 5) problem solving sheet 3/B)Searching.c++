// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <iostream>
using namespace std;
int main()
{
    long long n, t;
    bool f = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (t == a[i])
        {
            cout << i;
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        cout << "-1";
    }
    
}