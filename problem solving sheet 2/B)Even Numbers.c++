// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include <iostream>
using namespace std;
int main()
{
    int N, i = 2;
    cin >> N;
    if (N == 1)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
            
        }
    }
}