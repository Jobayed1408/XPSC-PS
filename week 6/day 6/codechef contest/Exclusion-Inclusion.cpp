#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n;
		cin>>n; 
		ll arr[n];
		ll ans = 0;
		for(ll i=0; i<n; i++) 
		{
			cin>>arr[i];
			ans+=arr[i];
		}
		
		sort(arr, arr+n);
		cout<<ans<<" ";
		for(ll i=0; i<n-1; i++)
		{
			ans-=arr[i];
			cout <<ans <<" ";
		}
		
		cout<<endl;
	}
}