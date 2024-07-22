// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= (i * 2); k++)
        { 
            cout << "*";
        }
        cout << endl;
    }
    
    
}