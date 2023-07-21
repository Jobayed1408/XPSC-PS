#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n , k; cin>>n >> k;
		ll arr[n];
		for(ll i=0; i<n; i++ ) cin>>arr[i];
		sort(arr, arr+n);
		
		ll c= 0, ans = 0;
		
		for(ll i=1; i<n; i++)
		{
			if( abs(arr[i] - arr[i-1]) <=k )
			{
				c++;
				ans = max(c , ans);
			}
			else c=0;
		}
		cout<< n -(ans+1)<<endl;
	}
}