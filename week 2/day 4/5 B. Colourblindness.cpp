#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin>>n;
		char arr1[n];
		char arr2[n];
		for(int i=0; i<n; i++) cin>>arr1[i];
		for(int i=0; i<n; i++) cin>>arr2[i];
		
		for(int i=0; i<n; i++)
		{
			if(arr1[i]=='B') arr1[i] = 'G';
			if(arr2[i]=='B') arr2[i] = 'G';
		}
		bool flag = true;
		for(int i=0; i<n; i++)
		{
			if(arr1[i] != arr2[i]) 
			{
				flag = false;
				break;
			}
		}
		if(flag) cout<<"Yes\n";
		else cout<<"NO\n";
		
	}
}