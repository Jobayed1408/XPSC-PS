#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		//cout<<m<<endl;
//		while(n--)
//		{
			ll m = INT_MAX; 
			ll arr[n*2+1];
			for(ll i=1; i<=n*2; i++)
			{
				cin>>arr[i];
			}
			
			for(ll i=1; i<=2*n; i++)
			{
				if(i%4 == 0)
				{
					for(ll j = 1; j<=2; j++)
					{
						for(ll k=3; k<=4; k++)
						{
							ll z = abs(arr[k] - arr[j]);
							m = min(m , z);
//							cout<<m<<" ";
						}
					}
				}
			}
			cout<<m<<endl;
//		}
		
	}
}