#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n , m; cin>>n>>m;
		if(n%2 == 0)
		{
			if(n/2 <= m) cout<<"Yes\n";
			else cout<<"No\n";
		}
		else {
			if( (n/2 + 1) <= m) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}