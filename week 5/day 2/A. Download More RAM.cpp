#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n , k;
		cin>>n>>k;
		ll a[n], b[n];
		vector< pair<int, int> >p;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			
		}for(int i=0; i<n; i++)
		{
			cin>>b[i];
			
		}
		for(int i=0; i<n; i++)
		{
			p.push_back({ a[i], b[i] });
//			if(a[i] >= b[i]) k+=b[i];
////			cout<<"k = "<<k<<endl;
		}
		sort(p.begin() , p.end());
		for(int i=0; i<n; i++)
		{
			if(p[i].first <= k) k+=p[i].second;
		}
		cout<<k<<endl;
//		cout<<k<<endl;
	}
}