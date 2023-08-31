#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n; 
	int ar[n+1];
	for(int i=1; i<=n; i++ ) cin>> ar[i];
	int ans  =0;
	for(int i=1; i<=n; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			if(i+j == ar[i]*ar[j]) ans++;
		}
	}
	cout << ans << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}