#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int ar[n];
		for(int i=0; i<n; i++) cin>>ar[i];
		sort( ar, ar+n);
		int ans = 0;
		for(int i=0, j=n-1; i<n/2; i++, j--)
		{
			ans+= (ar[j] - ar[i] );
		}
		cout<<ans<<endl;
	}
}