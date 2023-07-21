#include<bits/stdc++.h>
#define ll  long long int 
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		
		int x = arr[0];
		
		for(int i=1; i<n; i++)
			x &= arr[i];
		cout<<x<<endl;
		
	}
}