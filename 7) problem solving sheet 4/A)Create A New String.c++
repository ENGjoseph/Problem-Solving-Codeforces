// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    string s3 = s1 + " " + s2;
    cout << s3;
}