// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <iostream>
using namespace std;
int main()
{
    long long n, t;
    cin >> n >> t;
    string a;
    cin >> a;
    if (a[n] != '-')
    {
        cout << "No";
        return 0;
    }
    bool ch = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] < '0' || a[i] > '9') && i != n)
        {
            ch = 1;
        }
    }
    if (ch == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}