// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    cin >> a[0];
    long long mi = 0, ma = 0, max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            ma = i;
        }
        else if (a[i] < min)
        {
            min = a[i];
            mi = i;
        }
    }
    long long temp;
    temp = a[mi];
    a[mi] = a[ma];
    a[ma] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}