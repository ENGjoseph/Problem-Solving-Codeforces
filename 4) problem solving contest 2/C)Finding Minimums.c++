// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include <iostream>
using namespace std;
int main()
{
    long long k,n,t, counterk = 0, countern = 0;
    cin >> k >> n;
    while (counterk < k)
    {
        long long min = 10000000000000;
        while (countern != n)
        {
            cin >> t;
            if (min > t)
            {
                min = t;        
            }
            counterk ++;
            if (counterk == k)
            {
                break;
            }
            countern++;
        }
        cout << min << endl;
        countern = 0;
    }
    
}