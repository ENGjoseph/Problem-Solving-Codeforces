// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <iostream>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    for (int i = 2; i <= x; i++)
    {
        int counter = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                counter = 1;
                break;
            }
        }
        if (counter == 0)
        {
            cout << i << " ";
        }
        
    }
}