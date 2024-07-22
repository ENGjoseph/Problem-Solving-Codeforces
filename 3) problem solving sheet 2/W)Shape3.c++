// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i ; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= (i*2) ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i*2) - i ; j++)
        {
            cout << " ";
        }
        for (int j = (n*2); j > (i*2) + 1 ; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}