// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
#include <iostream>
using namespace std;
int main()
{
    long long n, a, b, sumt = 0;
    cin >> n >> a >> b;
    for (int i = n; i > 0; i--)
    {
        long long x = i, t, sum = 0;
        while (x != 0)
        {
            t = x % 10;
            x = x / 10;
            sum += t;
        }
        if (sum >= a && sum <= b)
        {
            sumt += i; 
        }
    }
    cout << sumt;
}