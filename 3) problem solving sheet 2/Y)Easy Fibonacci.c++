// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include <iostream>
using namespace std;
int main()
{
    long long a[45];
    int b;
    cin >> b;
    if (b == 0)
    {
        cout << "-1";
        return 0;
    }
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i <= b; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 1; i <= b; i++)
    {
        cout << a[i] << " ";
    }
    
}