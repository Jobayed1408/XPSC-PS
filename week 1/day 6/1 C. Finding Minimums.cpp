#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k;
	cin>>n>>k;
	vector<ll>v;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	ll mini = INT_MAX;
//	ll m ;
//	if(n%k==0) m = n/k;
//	else m = (n/k) + 1; 
	ll j = k-1;
	for(ll i=0; i<n; i++)
	{
		if(v[i] < mini) mini = v[i];
		if(i == j)
		{
			cout<<mini<<" ";
			j = j+k;
			mini = INT_MAX;
		}
//		ll mini = *min_element(v.begin(), v.begin()+k);
//		cout<<mini<< " ";
//		
//		for(ll j=0;j<k; j++)
//		{
//			vector<ll>::iterator it = v.begin();
//		     v.erase(it);
//		}
//		if(v.size() < k) k =v.size();
	}
	
	if(n%k != 0) cout<<mini<<endl;
	
}