// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b, div;
    cin >> a >> b;
    div = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(div) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(div) << endl;
    cout << "round " << a << " / " << b << " = " << round(div);
}