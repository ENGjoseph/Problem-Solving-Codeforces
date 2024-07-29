// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    cin >> a[0];
    long long min = a[0], counter = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            counter = 1;
            min = a[i];
        }
        else if (a[i] == min)
        {
            counter++;
        }
    }
    if (counter % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
}