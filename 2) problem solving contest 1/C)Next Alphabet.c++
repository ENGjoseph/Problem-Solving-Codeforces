// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include <iostream>
using namespace std;
int main()
{
    char l;
    cin >> l;
    int L = (int)l;
    if (l != 'z')
    {
        L++;
        l = (char)L;
        cout << l;
    }
    else
    {
        cout << 'a';
    }
}