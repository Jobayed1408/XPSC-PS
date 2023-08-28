#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int ar[3];
	int ma = 0;
	int mi = INT_MAX;
	int sum = 0;
	for(int i=0; i<3; i++)
	{
		cin>> ar[i];
		sum += ar[i];
		mi = min(mi , ar[i]);
		ma = max(ma , ar[i]);
	}
	
	sort(ar, ar+3);
	int ans  =0 ;
	if(ar[2] >= ar[0]+ar[1])
		ans = ar[0] + ar[1];
	else 
		ans  = ( (ar[0]+ar[1]+ar[2]) /2 );
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