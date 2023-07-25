#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
//	int t; cin>>t;
//	while(t--)
//	{
//		
//	}

	ll n; cin>>n;
	ll ar[n];
	for(ll i=0; i<n; i++) cin>>ar[i];
	ll o = 0, e = 0;
	for(ll i=0; i<n; i++)
	{
		if(ar[i]&1) o++;
		else e++;
	}
	if(o < e) cout<<o<<endl;
	else cout<<e<<endl;
//	cout<<o<<" "<<e<<endl;
	
}