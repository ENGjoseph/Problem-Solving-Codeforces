// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
#include <iostream>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    long long sum , mul , sub;
    sum = x + y;
    mul = x * y;
    sub = x - y;
    cout << x << " + " << y << " = " << sum <<  endl;
    cout << x << " * " << y << " = " << mul <<  endl;
    cout << x << " - " << y << " = " << sub;
}