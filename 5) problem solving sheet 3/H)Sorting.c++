// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                long long temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        cout << a[i] << " ";
    }
    
}