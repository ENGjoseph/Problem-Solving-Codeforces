// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,column;
	cin >> row >> column;
	char a[101][101];  
	for(int i=1;i<=row;i++)
    {
		for(int z=1;z<=column;z++)
        {
			cin >> a[i][z];
		}
	}
	int r,c;
	cin >> r >> c;
	if(a[r][c-1] != '.' &&
	   a[r][c+1] != '.' &&
	   a[r - 1][c] != '.' &&
	   a[r + 1][c] != '.' &&
	   a[r - 1][c - 1] != '.' &&
	   a[r - 1][c + 1] != '.' &&
	   a[r + 1][c - 1] != '.' &&
	   a[r + 1][c + 1] != '.'
    )   
    {
		cout<<"yes";
	}
    else 
    {
		cout<<"no";
	}
}