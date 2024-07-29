// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCases,result = 0,flag = 1,min;
	cin >> testCases;
	while(testCases--)
    {
		int size;
		cin >> size;
		int arr[size];
		for(int i=0;i<size;i++)
        {
			cin >> arr[i];
		}
		for(int z=1 ;z<=size ;z++)
        { 
			for(int x=z+1 ;x<=size ;x++)
            {
				result = (arr[z-1] + arr[x-1]) + (x-z);
				if(flag == 0 && min > result)
                {
					min = result;
				}
				if(flag)
                { 
					min = result;
					flag = 0;
				}
				result = 0;
			}
		}
		flag = 1;
		cout << min << endl;
	}
	
}