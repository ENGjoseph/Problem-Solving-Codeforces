// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            long long c = 0, b = i - 1;
            while (c < b)
            {
                long long temp = a[c];
                a[c] = a[b];
                a[b] = temp;
                c++;
                b--;
            }
            
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }
    
}