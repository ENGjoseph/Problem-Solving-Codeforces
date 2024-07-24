// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
#include <iostream>
using namespace std;
int main()
{
    long long x, max = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        long long n, counter = 0;
        cin >> n;
        while (n % 2 == 0)
        {
            counter++;
            n /= 2;
        }
        if (counter > max)
        {
            max = counter;
        }
    }
    cout << max;
}