// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    while (n != 1999)
    {
        cin >> n;
        if (n == 1999)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
}