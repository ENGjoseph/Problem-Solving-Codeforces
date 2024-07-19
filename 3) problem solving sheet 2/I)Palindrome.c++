// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int num1,num2;
    cin >> x;
    char y[x.length()];
    int c = 0;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        y[c] = x[i];
        c++;
    }
    stringstream s1;
    s1 << x;
    s1 >> num1;
    stringstream s2;
    s2 << y;
    s2 >> num2;
    cout << num2 << endl;
    if (num1 == num2)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO";
    }
}