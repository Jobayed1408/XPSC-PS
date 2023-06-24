#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll ar[n];
		ll ans = 0;
		ll cnt = 0;
			bool flag = false;
		for(int i=0; i<n; i++) {
			cin>> ar[i];
			if( ar[i]>0 and flag ) 
			{
				flag = false;
			}
			if( ar[i]<0 and !flag )
			{
				flag = true;
				cnt++;
			}
			ans+= abs(ar[i]);
		}
		cout<<ans<<" "<<cnt<<endl;
	}
}


