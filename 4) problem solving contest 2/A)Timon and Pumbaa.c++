// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include <iostream>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << "0";
    }
    else
    {
        cout << a - b;
    }
}