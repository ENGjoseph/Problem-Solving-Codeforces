// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
}