// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long a = 0, b = n - 1;
    while (a <= b)
    {
        if (a != b)
        {
            cout << arr[a] << " " << arr[b] << " ";
        }
        else
        {
            cout << arr[a];
        }
        a++;
        b--;
    }
}