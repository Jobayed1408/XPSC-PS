#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n; 
		int ar[n];
		long ans  = 0;
		for(int i=0; i<n; i++) 
		{
			cin>> ar[i];
			ans += ar[i];
		}
		if(ans >=  n) cout << ans - n << endl;
		else 
		{
			cout << 1 << endl;
		}
	}
}