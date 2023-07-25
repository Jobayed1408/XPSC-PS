#include<bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
	int n; cin>>n;
	ll  ar[n];
	for(ll i=0; i<n; i++) cin>>ar[i];
	sort(ar, ar+n);
	vector<ll> v;
	ll c=0;
	ll square_root = (ll) sqrt(ar[0]) + 1;
	for (ll i = 1; i <= square_root; i++) { 
	    if (ar[0] % i == 0 && i*i!=ar[0])
			v.push_back(ar[0]/i);
//		   cout << i << num/i << endl;
	    if (ar[0] % i == 0&&i*i==ar[0])
			{v.push_back(i);
				c++;
			}
		
//		   cout << i << '\n';
	}
	if(ar[0] > 1) v.push_back(ar[0]);
//	cout<<v.size()<<endl;
//	for(int i=1; i<=ar[0]; i++)
//	{
//		if(ar[0] % i == 0) 
//		{
//			v.push_back(i);
//			c++;
//		}
//	}
	c = v.size();
	for(int i=1; i<n; i++)
	{
		ll x = ar[i];
		ll d =0 ;
		for(int j=0; j<v.size(); j++)
		{
			if(ar[i] % v[j] == 0) d++;
		}
//		cout<<c<<" "<<d<<endl;
		c = min(c , d);
	}
	cout << c<<endl;
}