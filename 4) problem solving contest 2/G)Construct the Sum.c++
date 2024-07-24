// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
#include <iostream>
using namespace std;
int res[1000005];
int main()
{
    long long t;
    bool f = 0;
    cin >> t;
    long long cou = 0;
    for (int i = 0; i < t; i++)
    {
        long long n,s;
        cin >> n >> s;
        if (n * (n+1) / 2 < s)
        {
            cout << -1;
        }
        else
        {
            long long sum = 0;
            for (int j = n; j >= 1; j--)
            {
                if (sum + i <= s)
                {
                    sum += j;
                    res[cou] = j;
                    cou++;
                }
                if (sum == s)
                {
                    break;
                }   
            }
        }
        for (int x = 0; x < cou; x++)
        {
            cout << res[x] << " ";
        }
        cout << endl;
        long long cou = 0;

    }
    
}