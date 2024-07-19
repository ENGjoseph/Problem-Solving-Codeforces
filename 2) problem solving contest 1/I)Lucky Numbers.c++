// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include <iostream>
using namespace std;
int main()
{
    int n,m,d;
    cin >> n;
    m = n % 10;
    d = n / 10; 
    if (n % 10 == 0)
    {
        if (m % d == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else 
    {
        if (m % d == 0 ||d % m == 0)
            {
                cout << "YES";
            }
        else
            {
            cout << "NO";
            }
    }
}