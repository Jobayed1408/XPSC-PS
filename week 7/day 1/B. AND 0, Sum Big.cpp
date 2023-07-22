#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

ll power(ll b,  ll p)
{
	ll ans = 1;
	for(ll i=0; i<p; i++)
	{
		ans = (ans*b)%mod;
//		cout<<ans<<" ";
	}
	return ans;
}

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n  , k;
		cin>>n >>k;
		cout<<power(n , k)<<endl;
	}
}