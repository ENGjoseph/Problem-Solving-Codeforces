// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
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
        if (a[i] <= 10)
        {
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }
}