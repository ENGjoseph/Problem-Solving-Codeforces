// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
#include <iostream>
using namespace std;
int main()
{
    long long a, b, z, sum = 0;
    cin >> a >> b;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            z = b - (i + j);
            if (z >= 0 && z <= a)
            {
                sum++;
            }
            
        }
    }
    cout << sum;
}