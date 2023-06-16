#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll ar1[n]; ll ar2[n];
		ll ma = 0;
		ll ma2 = 0;
		ll  a=0,b=0;
		for(int i=0; i<n; i++)
		{
			cin>>ar1[i];
			if(ar1[i] != 0) 
			{
				a++;
				if(ma < a) ma = a;
			}
			else 
			{
				if(ma < a) ma = a;
				a=0;
			}
			
		}
		for(int i=0; i<n; i++)
		{
			cin>>ar2[i];
			if(ar2[i] != 0) 
			{
				b++;
				if(ma2 < b) ma2 = b;
			}
			else 
			{
				if(ma2 < b) ma2 = b;
//				cout<<ma2<<endl;
				b=0;
			}
		}
		
		if(ma == ma2) cout<<"Draw\n";
		else if(ma > ma2) cout<<"Om\n";
		else cout<<"Addy\n";
		
	}
}