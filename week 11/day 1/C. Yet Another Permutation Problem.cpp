#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n; 
	vector<int> ans , vis(n+1);
	for(int i=1; i<=n; i++)
	{
		if(vis[i]) continue;
		int now = i;
		while(now <= n)
		{
			vis[now] = 1;
			ans.push_back(now);
			now *= 2;
		}
	}
	for(auto i : ans ) 
		cout << i << " ";
	cout << endl;
}


int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}