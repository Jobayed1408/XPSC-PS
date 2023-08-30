#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int m , n; cin>> m  >> n;
	
	string s; cin >> s;
	if(n%2 == 0)
	{
		sort(s.begin() , s.end());
		cout << s << endl;
		return;
	}
	vector<char>even , odd;
	for(int i=0; i<s.size(); i++)
	{
		if( (i&1) ) even.push_back(s[i]);
		else odd.push_back(s[i]);
	}
	sort(even.begin() , even.end());
	sort(odd.begin() , odd.end());
	
	int l = 0;
	int r = 0;
	for(int i=0; i<m; i++)
	{
		if( i&1 ) 
		{
			cout << even[l];
			l++;
		}
		else 
		{
			cout << odd[r];
			r++;
		}
	}
	
	cout <<endl;
}

int main()
{
	int t; cin>> t;
	while(t--) solve();
}