#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int ar[n];
	for(int i=0; i<n; i++) cin>> ar[i];
	
	if(n%2) 
	{
		cout << "NO\n"; return;
	}
	sort(ar, ar+n);
	for(int i=1; i<n/2; i++)
	{
		if(ar[i] == ar[i+n/2-1 ]) 
		{
			cout << "NO\n"; return;
		}
	}
	cout << "YES\n";
	for(int i=0; i<n/2; i++)
	{
		cout << ar[i] << " " << ar[n/2 + i] << " ";
	}
	cout << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
		solve();
}