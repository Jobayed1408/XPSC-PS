#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n; cin>> n;
	int ar[n];
	int mi=INT_MAX, ma=INT_MIN;
	for(int i=0; i<n; i++)
	{
		cin >> ar[i];
		if(ar[i] < mi) mi = ar[i];
		if(ar[i] > ma) ma  = ar[i];
	}
	cout <<ma - mi << endl;
	
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}