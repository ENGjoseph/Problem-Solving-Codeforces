// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
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
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}