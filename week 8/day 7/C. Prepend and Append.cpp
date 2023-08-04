#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>>n;
	string s; cin>>s;
	int ans = 0;
	int size = 0;
	if((n & 1) ? (size = n/2+1) : (size = n/2));
	for(int i=0 , j=n-1; i<size; i++ ,j--)
	{
		if(s[i] == s[j])
		{
			ans = j-i+1;
			break;
//			cout <<"ans = "<< ans << endl;
//			return;
		}
	}
	cout  <<ans<<endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}