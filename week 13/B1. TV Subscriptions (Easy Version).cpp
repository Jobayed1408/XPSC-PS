#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k ,d; cin>> n >> k >> d;
	int ar[n];
	for(int i=0; i<n; i++) cin>> ar[i];
	int mi = 101;
	for(int i=0; i<=n-d; i++)
	{
		set<int> st;
		st.clear();
		for(int j =i; j<d+i; j++)
		{
			st.insert(ar[j]);
		}
		int x = st.size();
		mi = min(mi , x);
	}
	cout << mi << endl;
}

int main()
{
	int t; cin>> t; 
	while(t--)
		solve();
}