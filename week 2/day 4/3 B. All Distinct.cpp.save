#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = 0;
    ll evenCount = 0;
    for (auto key : mp)
    {
        ll x = key.second;
        ans++;
        if (x % 2 == 0)
            evenCount++;
    }
    if (evenCount % 2)
        ans--;
    cout << ans << endl;
//		ll N = 1e5+7;
//		ll freq[N+7];
//		for(ll i=0; i<=N; i++) freq[i] = 0;
//		ll n;
//		cin>>n;
//		for(ll i=0; i<n; i++)
//		{
//			ll x; cin>>x;
//			freq[x]++;
//		}
//		ll c=0;
//		for(ll i=0; i<=N; i++)
//		{
//			if(freq[i]>0) c++ ; 
//		}
//		if(n%2 != 0 ) c--;
//		cout<<c<<endl;
	}
	
}