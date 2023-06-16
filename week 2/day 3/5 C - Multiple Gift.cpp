#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n, m ; cin>>n>>m;
	ll c = 0;
	for(ll i=n; i<=m; i*=2)
	{
		c++;
	}
	cout<<c<<endl;
}
