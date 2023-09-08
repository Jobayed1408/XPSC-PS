#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n ; cin>> n;
	int ar[n];
	map<int , int > mp;
	set < int > st;
	for(int i=0; i<n; i++) 
	{
		cin>> ar[i];
		mp[ar[i]]++;
		st.insert(ar[i]);
	}
	int sz = st.size();
	int ma = 0 ;
	for(auto i : mp)
	{
		if(i.second > ma) ma = i.second; 
	}
	if(sz > ma)
	cout << ma  << endl;
	else if(ma > sz)
		cout << sz << endl;
	else 
		cout << sz - 1 << endl;
}
int main()
{
	int t; cin >> t; 
	while(t--)
	{
		solve();
	}
}