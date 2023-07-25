#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

	ll n; cin>>n;
	vector<ll>ar(n);
	for(ll i=0; i<n; i++) cin>>ar[i];
	vector<pair<int, int> > p;
	
	for(int i=0; i<n; i++)
	{
		p.push_back ({ar[i] , i});
	}
	sort(ar.rbegin(), ar.rend());
	
	ll ans = 0;
	for(int i=0; i<n; i++)
	{
		ans+=(ar[i]*i + 1);
//		cout<<ar[i]<<" "<<ans<<endl;
	}
	cout<<ans<<endl;
	for(int i=0; i<n; i++)
	{
		
		for(int j=0; j<p.size(); j++)
		{
			if(ar[i] == p[j].first)
			{
				cout<<p[j].second+1<<" ";
				p.erase(p.begin()+j); 
			}
				
		}
	}
	cout<<endl;
//	for(int i=0; i<ar.size(); i++)
//	{
//		int cur = -1;
//		for(int j=0; j<ar2.size(); j++)
//		{
//			if(ar[i] == ar2[j] && j != cur)
//			{
//				cur = j;  
//				ar2.erase(ar2.begin()+j);
////				cout<<cur<<" "<<j<<endl;
//				break;
//			}
//		}
//		cout<< cur+1 <<  " ";		
//	}
	
	
}