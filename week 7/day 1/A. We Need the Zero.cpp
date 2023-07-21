#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int ans = 0;
		for(int i=0; i<n; i++)
		{
			ans = ans ^ arr[i];
		}
//		int k = ans;
//		for(int i=0; i<n; i++)
//		{
//			k = k ^ arr[i];
//		}
		if(ans == 0)
			cout<<0<<endl;
		else if(n & 1) 
		{
//			cout<< (n&1)<<" ";
			cout<<ans<<endl;
		}
		else cout<<-1<<endl;
	}
}