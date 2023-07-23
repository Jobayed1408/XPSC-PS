#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		for(int i=1; i<= n; i+=2)
		{
			cout<<i<<" ";
		}
		for(int i=n; i>=2; i-=2)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}