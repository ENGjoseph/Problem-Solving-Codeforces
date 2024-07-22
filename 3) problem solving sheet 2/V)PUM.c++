// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0, t = 1;
    cin >> n;
    while (counter != n)
    {
        if (t % 4 == 0)
        {
            cout << "PUM" << endl;
            counter++;
        }
        else
        {
            cout << t << " ";
        }
        t++;
    }
}