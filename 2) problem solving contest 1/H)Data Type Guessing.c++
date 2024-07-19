// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    long long n, k, a;
    cin >> n >> k >> a;
    long long result = n * k;
    if (result % a != 0) 
    {
        cout << "double" << endl;
    } 
    else 
    {
        result /= a;
        if (result >= INT_MIN && result <= INT_MAX) 
        {
            cout << "int" << endl;
        }
        else 
        {
            cout << "long long" << endl;
        }
    }
    return 0;
}
