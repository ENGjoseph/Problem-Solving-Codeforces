// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <iostream>
using namespace std;
int main()
{
    float n;
    int N;
    cin >> n;
    N = (int)n;
    if (N == n)
    {
        cout << "int " << n;
    }
    else
    {
        cout << "float " << N << " " << n - N;
    }
}