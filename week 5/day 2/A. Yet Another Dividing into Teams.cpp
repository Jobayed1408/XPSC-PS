#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		
		sort(arr, arr+n);
		int ans = 1;
		
		for(int i=0; i<n-1; i++)
		{
//			for(int j=i+1; j<n; j++)
//			{
				if(arr[i]+1 == arr[i+1])
				{
//					cout<<"dukse\n";
					ans++; 
					break;
				}
//			}
		}
		
		cout<<ans<<endl;
		
	}
	
}