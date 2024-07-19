// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double p, x;
    cin >> x >> p;
    x = 1 - (x / 100);
    cout << fixed << setprecision(2);
    cout << p / x;
}