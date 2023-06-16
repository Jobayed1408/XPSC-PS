#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin >>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		 k = min((int)k , 61);
		 ll x = (1ll<<k);
		 ll y = n+1ll;
		 ll ans = min(x,y);
		 cout<<ans<<endl;
		 
	}
}