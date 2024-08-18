// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    // first solution
    
    // if (a <= b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }

    // second solution
    int num = a.compare(b);
    if (num <= 0)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
}