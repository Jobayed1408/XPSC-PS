#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n; cin>>n;
	ll arr[n+1]; 
	ll ar2[n+1];
	for(ll i=1; i<=n; i++) 
	{
		ll x;
		cin>>x;
		arr[i] = x; ar2[i] = x;
	}
	
	sort(ar2+1, ar2+n+1);
	arr[0] = 0; ar2[0] = 0;
//	for(int i=1; i<=n; i++) cout<<ar2[i]<<" ";
	for(int i=1; i<=n; i++)
	{
		arr[i] = arr[i-1]+arr[i];
		ar2[i] = ar2[i-1]+ar2[i]; 
	}
	ll q; cin>>q;
	
	while(q--)
	{
		ll sum = 0;
		ll a,b,c; cin>>a>>b>>c;
		if(a==1)
		{
			
			cout<<arr[c] - arr[b-1];
		}
		else
		{
//			cout<<ar2[c]<<" "<<ar2[b];
			cout<<ar2[c] - ar2[b-1];
		}
		cout<<endl;
	}
		
}