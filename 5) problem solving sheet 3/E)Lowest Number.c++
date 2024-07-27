// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    cin >> a[0];
    long long min = a[0], p = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
            p = i + 1;
        }
    }
    cout << min << " " << p;
}