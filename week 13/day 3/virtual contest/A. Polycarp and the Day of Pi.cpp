#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin>> s;
	string arr =  {"314159265358979323846264338327"} ;
	int ans = 0 ;
	for(int i=0; i<s.size(); i++)
	{
//		cout << arr[i] <<" ";
		if( arr[i]  == s[i])
		{
			ans++;
		}
		else 
		{
			cout << ans << endl;
			return;
		}
	}
	cout << ans << endl;
			return;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}