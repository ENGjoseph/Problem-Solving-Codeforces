// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n], counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j] - 1 && arr[j] != arr[j + 1])
            {
                counter++;
            }
        }
    }
    cout << counter;
}