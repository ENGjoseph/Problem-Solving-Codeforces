// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include <iostream>
using namespace std;
int main()
{
    long long x , y;
    cin >> x;
    char a;
    cin >> a;
    cin >> y;
    switch (a) 
    {
    case '+':
        cout << x+y;
        break;
    case '-':
        cout << x-y;
        break;
    case '*':
        cout << x*y;
        break;
    case '/':
        cout << x/y;
        break;
    }
}