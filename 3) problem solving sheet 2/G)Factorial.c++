// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        long long ans = 1;
        cin >> t;
        if (t != 0)
        {
            for (int j = 1; j <= t; j++)
            {
                ans = ans * j;
            }
            cout << ans << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}