// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include <iostream>
using namespace std;
int main()
{
    int t, max , min;
    long long x, y, sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            max = x;
            min = y;
        }
        else 
        {
            max = y;
            min = x;
        }
        for (int j = min + 1; j < max; j++)
        {
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
}