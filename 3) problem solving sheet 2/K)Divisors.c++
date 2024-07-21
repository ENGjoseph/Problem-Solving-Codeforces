// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include <iostream>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << endl;
        }
    }
}