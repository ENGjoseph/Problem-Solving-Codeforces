// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        long long arr[n] , ce = 0, co = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 0)
            {
                ce++;
            }
            else
            {
                co++;
            }
        }
        long long counter = 0;
        if (n % 2 != 0)
        {
            counter = -1;
        }
        else if (ce == co)
        {
            counter = 0;
        }
        else if (ce > co)
        {
            counter = (ce - co) / 2;
        }
        else if (ce < co)
        {
            counter = (co - ce) / 2;
        }
        cout << counter << endl;
    }
}