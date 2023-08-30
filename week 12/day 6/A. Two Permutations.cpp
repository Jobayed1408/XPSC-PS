#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , a ,b;
	cin>> n>>a>>b;
	if(a== b and a == n) cout << "Yes\n";
	else if(a + b +2 <= n) cout << "Yes\n";
	else cout << "no\n";
	
}

int main()
{
	int t; cin>> t; 
	while(t--)
	{
		solve();
	}
}