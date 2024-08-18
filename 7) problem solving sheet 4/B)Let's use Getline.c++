// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '\\')
        {
            return 0;
        }
        cout << s1[i];
    }
}