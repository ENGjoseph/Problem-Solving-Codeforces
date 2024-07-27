// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    long long m[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
        sum += m[i];
    }
    if (sum < 0)
    {
        sum = sum * (-1);
    }
    cout << sum;
}