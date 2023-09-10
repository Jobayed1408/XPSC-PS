
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	ll n , x ; cin>> n >> x;
	ll a[n];
	map<ll  , ll > mp;
	for(ll i=0; i<n; i++) 
	{
		cin>>a[i]; 
		mp[a[i]]++;
	}
	sort(a , a+n);
	ll ans= 0 ;
	for(ll i=0; i<n; i++)
	{
		if(mp[a[i]])
		{
			mp[a[i]*x] ? mp[a[i]*x]-- : ans++; 
			mp[a[i]]--;
		}
	}
	cout << ans << endl;
}

int main()
{
	ll t ; cin>> t;
	while(t--)
		solve();
}