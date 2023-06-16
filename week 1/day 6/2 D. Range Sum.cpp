#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll m,n;
		cin>>m>>n;
		if(m>n)
		{
			ll t = m;
			m = n;
			n = t;
		}
		m--;
		ll ans1 = (n*(n+1))/2;
		ll ans2 = (m*(m+1))/2;
		cout<<ans1-ans2<<endl;
	}
	
}