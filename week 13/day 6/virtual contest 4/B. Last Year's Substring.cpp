#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int k ; cin>> k;
	string  s; cin >> s; 
	int l , r;
	int x = 1;
	int n = s.size()-1;
	if(s[0] != '2' and s[n] != '0')
		x = 0;
	else if(s[0] != '2' and s[n] == '0')
	{
		if(s[n-1] != '2' || s[n-2] != '0' || s[n-3] != '2') x = 0;
	}
	else if(s[0] == '2' and s[n] != '0')
	{
		if(s[1] != '0' || s[2] != '2' || s[3] != '0') x = 0;
	}
	else if(s[0] == '2' and s[n] == '0')
	{
		if(s[1] == '0' and s[2] == '2') x = 1; 
		else if( s[n-1] == '2' and s[n-2] == '0' ) x = 1;
		else if(s[1] == '0' and s[n-1] == '2') x= 1; 
		 
		else x = 0;
	}
	else if(s[n] == '0')
	{
		if(s[n-1] != '2' || s[n-2] != '0' || s[n-3] != '2') x = 0;
	}
	if(x ? cout << "YES\n" : cout << "NO\n" );

}

int main()
{
	int t; cin >> t; while( t--) solve();
}