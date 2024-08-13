// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long a[t] , b[t];
    for (int j = 0; j < t; j++)
    {
        cin >> a[j];
    }
    for (int j = 0; j < t; j++)
    {
        cin >> b[j];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
                {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (b[i] < b[j])
                {
                long long temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    bool ch = 0;
    for (int i = 0; i < t; i++)
    {
        if (a[i] != b[i])
        {
            ch = 1;
        }
    }
    if (ch == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}