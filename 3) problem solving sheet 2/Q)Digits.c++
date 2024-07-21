// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include <iostream>
using namespace std;
int main()
{
    long long n, t;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
        {
            cout << t << " ";
        }
        while (t != 0)
        {
            x = t % 10;
            t = t / 10;
            cout << x << " ";
        }
        cout << endl;
    }
}