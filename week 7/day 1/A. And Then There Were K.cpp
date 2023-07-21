#include<bits/stdc++.h>
#define ll  long long int 
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll k = 0;
		while(n != 0)
		{
			k = n-1;
			n &= k;
		}
		cout<< k <<endl;
	}
}