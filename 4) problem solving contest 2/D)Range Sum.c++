// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include <iostream>
using namespace std;
int main()
{
    long long t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        long long sum, max , min;
        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        
        sum = ((max - min + 1) * (min + max) / 2);
        cout << sum << endl;
    }
}