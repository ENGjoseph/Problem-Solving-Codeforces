// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <iostream>
using namespace std;
int main()
{
    long long n;
    int cy = 0, cm = 0;
    cin >> n;
    while (n >= 365)
    {
        n = n - 365;
        cy++;
    }
    while (n >= 30)
    {
        n = n - 30;
        cm++;
    }
    cout << cy << " years" << endl;
    cout << cm << " months" << endl;
    cout << n << " days";
    return 0;
}
