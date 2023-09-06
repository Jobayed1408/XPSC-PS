#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	ll t; cin>> t;
	while(t--)
	{
	    ll n; cin>> n; 
	    ll ar[n];
	    for(ll i=0; i<n; i++) cin>> ar[i];
	    long long int ans =  0;
	    for(ll i=0; i<n; i++)
	    {
	    	for(ll j=i+1; j <n ; j++)
		{
			ans += (ar[i] * ar[j]);
		}
	    }
		cout << ans << endl;
	}
	return 0;
}
