#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b; cin>>a>>b;
		int ans = a*b;
		if(ans>=10000 && ans<=99999)
		{
			cout<<"YES\n";
			
		}
		else cout<<"NO\n";
	}
}