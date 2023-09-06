#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n; 
	int ar[n];
	for(int i=0; i<n; i++) cin>> ar[i];
	int  m = n-1;
	if(n&1)
	{
			for(int i=0; i<=n/2; i++)
		{
			if((n&1) and i==m )
			{
				cout << ar[i] ; break;
			}
			cout << ar[i] << " " << ar[m] << " ";
			m--; 
			
		}
	}
	else 
	{
		for(int i=0; i<n/2; i++)
		{
			
			cout << ar[i] << " " << ar[m] << " ";
			m--; 
			
		}
	}
	cout << endl;
}

int main()
{
	int t; cin >> t; while( t--) solve();
}