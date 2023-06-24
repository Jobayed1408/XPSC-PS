#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll ans = 0; 
		ll n; cin>>n;
		while(n!=0)
		{
			ans+=n;
			n/=2;
		}
		cout<<ans<<endl;
	}
}