#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n];
		
		int j=-1;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int m  = arr[n-1];
		int cnt = 0;
		for(int i=n-2; i>=0; i--)
		{
			if(m < arr[i])
			{
				cnt++;
			}
			m  = min(m,arr[i]);
		}
		cout<<cnt<<endl;
	}
}