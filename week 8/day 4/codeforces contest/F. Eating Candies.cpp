#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ll ar[n];
		for(ll i=0; i<n; i++) cin>> ar[i];
		ll ls= 0 , rs=0,c=0;
		ll m = 0;
		if(n==1) 
		{
			cout <<0 <<endl; continue;
		}
		
		ll i=0 , j=n-1;
		while(i <= j)
		{
			if(ls <= rs)
			{
				ls+=ar[i];
				i++;
				c++;
			}
			else 
			{
				rs+=ar[j];
				j--;
				c++;
			}
			if(ls == rs)
			{
				m = c;
			}
		}
		cout << m << endl;
	}
}