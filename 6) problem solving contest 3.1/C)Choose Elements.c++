// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = n - k; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            sum += arr[i];
        }
    }
    cout << sum;
}