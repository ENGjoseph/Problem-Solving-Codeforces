// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    char t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=  t[i] - '0';
    }
    cout << sum;
}
