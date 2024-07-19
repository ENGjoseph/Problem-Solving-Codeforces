// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <iostream>
using namespace std;
int main()
{
    long long N, n, max = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n > max)
        {
            max = n;
        }
    }
    cout << max;
}