#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n ,a, b;cin>> n >> a >> b;
	string s = "";
	for(int i=0; i<n; i++)
	{
		char ch = 'a' + i%b;
		s += ch;
//		cout << s << endl;
	}
	cout << s << endl;
}
int main()
{
	int t; cin >> t; 
	while(t--)
	{
		solve();
	}
}