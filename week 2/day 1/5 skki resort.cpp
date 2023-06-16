#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin >>t;
	while(t--)
	{
		ll n,k,q; cin>>n>>k>>q;
		
		ll arr[n];
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		ll ans = 0;
		ll c = 0;
		for(int i=0; i<n; i++)
		{
			if(arr[i] <=q )
			{
				c++;
				if(i==n-1 or arr[i+1] > q)
				{
					if(c >= k)
					{
						ll x =c - k +1;
						ll add  = (x*(x+1))/2;
						ans+=add;
					}
				c = 0;
				}
			}
		}
		 
		cout<<ans<<endl;
	}
}