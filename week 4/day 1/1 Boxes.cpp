#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll cs = 1;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
	ll a[n];
	ll mx = 0;
	for(ll i=0; i<n; i++) 
	{
		cin>>a[i];
		if(a[i] & 1) a[i]--;
	}
	map<ll , ll>mp;
	for(ll i=0; i<n; i++)
	{
		ll ans = 0;
		while(a[i] > 1)
		{
			ans++;
			a[i] /= 2;
		}
		mx = max(mx,a[i]);
		mp[a[i] ]++;
	}
	
	ll finalAns = ceil(mp[mx] * 1.0 / 2);
	cout<<finalAns<<endl;
	}
}