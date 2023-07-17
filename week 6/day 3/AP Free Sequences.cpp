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
		bool b = false;
		for(int i=0; i<n; i++) 
		{
			for(int j=i+1; j<n; j++)
			{
				for(int k=i+1; k<n; k++)
				{
					if(arr[k]-arr[j]==arr[j]-arr[i])
					{
						b = true; break;
					}
				}
			}
//			if(arr[i]  - arr[i-1] == arr[i-1] - arr[i-2]) {
//				b = true;
//				break;
//			}
		}
		if(!b) cout<<"Yes\n";
		else cout<<"No\n";
		
	}
}