#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n; cin>> n; 
	int ar[n];
	vector<pair<int , int >> v;
	for(int i=0; i<n; i++) 
	{
		int x; 
		cin>> x;
		v.push_back( {x , i});
//		cout << p[i].first << " " << p[i].second <<endl;
	}
	sort(v.begin() , v.end() );
	int p = n;
	for(int i=0; i<n; i++)
	{
		v[i].first = p;
		p--;
	}
	int ans[n]    ;
	for(int i=0; i<n; i++)
	{
		ans[v[i].second] = v[i].first; 
	}
	for(int i=0; i<n; i++)
		cout << ans[i]<< " ";
	cout << endl;
	
}
int main()
{
	
	int t; cin>> t;
	while(t--)
		solve();
}