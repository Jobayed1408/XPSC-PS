#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>>n;
	string s; cin>>s;
	int ans = 0;
	
	vector<int> pref(n , 0) , suff(n , 0);
	set<char> st;
	for(int i=0; i<n; i++)
	{
		st.insert(s[i]);
		pref[i] =  st.size();
	}
	st.clear();
	for(int i=n-1; i>=0; i--)
	{
		st.insert(s[i]);
		suff[i] = st.size();
	}
	for(int i=0; i<n-1; i++)
	{
		ans = max(ans , pref[i]+suff[i+1]);
	}
//		 ans = m1.size() + m2.size(); 
		cout  << ans << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}