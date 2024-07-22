// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    long long n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long p, sum = 0, b = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                p = pow(2,b);
                sum = sum + p;
                b++;
            }
            n = n / 2;
        }
        cout << sum << endl;
    }
}