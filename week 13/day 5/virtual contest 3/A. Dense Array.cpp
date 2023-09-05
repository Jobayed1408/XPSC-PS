#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n; int ar[n];
	for(int i=0; i<n; i++) cin>> ar[i]; 
	int ans = 0;
	int x;
	for(int i=0; i<n-1; i++)
	{
		if(ar[i+1] > ar[i]*2)
		{
			while(ar[i+1] > ar[i]*2)
			{
				ans++;
				ar[i] *= 2;
//				cout << ar[i] << " ";
			}
		}
		else 
		{
			while(ar[i] > ar[i+1]*2)
			{
				ans++;
				ar[i] = ceil((float)ar[i]/2);
//				cout << ar[i] << " ";
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	int t; cin>> t; 
	while(t--) solve();
}