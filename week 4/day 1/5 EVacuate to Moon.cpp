#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	
	while(t--)
	{
		ll n, m , h , ans = 0;
		cin>>n>>m >>h;
		int ar[n];
		int ar2[m];
		for(int i=0; i<n; i++) cin>>ar[i];
		for(int i=0; i<m; i++) cin>>ar2[i];
		sort(ar, ar+n ,greater<int>() );
		sort(ar2, ar2+m, greater<int>() );
		for(int i=0, j=0; i<n and j<m; i++,  j++)
		{
			if(ar2[j]*h > ar[i]) 
			{
				ans+=ar[i]; 
//				cout<<ans<<endl;
			}
			else 
			{
				ans+=ar2[j]*h;
//				cout<<ans<<endl;
			}
		}
		cout<<ans<<endl;
	}
	
}