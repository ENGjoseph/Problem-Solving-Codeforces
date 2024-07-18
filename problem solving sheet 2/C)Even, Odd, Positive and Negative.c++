// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <iostream>
using namespace std;
int main()
{
    int N, a, p = 0, n = 0, e = 0, o = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a < 0)
        {
            n++;
        }
        else if (a > 0)
        {
            p++;
        }
        if (a % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n;
}