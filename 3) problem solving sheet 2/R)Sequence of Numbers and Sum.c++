// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    while (m > 0 && n > 0)
    {
        int max, min, sum = 0;
        if (n > m)
        {
            max = n;
            min = m;
        }
        else
        {
            max = m;
            min = n;
        }
        for (int i = min; i <= max ; i++)
        {
            sum = sum + i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
        cin >> n >> m;
    }
}