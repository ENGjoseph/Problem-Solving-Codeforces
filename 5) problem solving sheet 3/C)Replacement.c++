// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
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
        if (a[i] > 0)
        {
            a[i] = 1;
        }
        else if (a[i] == 0)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 2;
        }
        cout << a[i] << " ";
    }
}