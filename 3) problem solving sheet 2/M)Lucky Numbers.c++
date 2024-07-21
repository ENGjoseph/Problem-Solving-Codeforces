// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include <iostream>
using namespace std;
int main()
{
    long long a, b, t;
    cin >> a >> b;
    bool f = 0, v = 1;
    for (int i = a; i <= b; i++)
    {
        int x = i;
        while (x > 0)
        {
            t = x % 10;
            x = x / 10;
            if (t != 4 && t != 7)
            {
                f = 1;
            }
        }
        if (!f)
        {
            cout << i << " ";
            v = 0;
        }
        f = 0;
    }
    if (v == 1)
    {
        cout << "-1";
    }
    
}