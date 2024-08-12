// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
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
    bool t = 0;
    long long counter = 0;
    while (t == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << counter;
                return 0;
            }
            a[i] = a[i] / 2;
        }
            counter++;
    }
}