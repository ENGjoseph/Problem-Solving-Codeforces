// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin >> a >> b;
	long long arr1[a];
	long long arr2[a];
	for(int i=0;i<a;i++){
		cin >> arr1[i];
		if(i == 0){
			arr2[i] = arr1[i];
		} else {
			arr2[i] = arr1[i] + arr2[i-1];
		}
	}
	while(b--)
    {
		long long c,d;
		cin >> c >> d;
		c--;
		d--;
		long long sum = arr2[d] - arr2[c] + arr1[c];
		cout << sum << endl;
	}
}