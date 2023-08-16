#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long 
using namespace std;
ll fact(int n)
{
	ll ans = 1;
	for(int i=3; i<=n; i++)
	{
//		long long f = ((ans %  mod) * (i % mod)) % mod;
		ans  = (ans * i)%mod;
//		cout << ans <<" ";
	}
	return ans  ;//=  (ans % mod);
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin >> n;
		ll m = fact(n*2);
		cout << m << endl;
	}
}