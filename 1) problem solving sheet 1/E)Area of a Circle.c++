// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double R, area;
    cin >> R;
    area = 3.14159265358979323846 * R * R;
    cout << fixed << setprecision(9) << area ; 
}