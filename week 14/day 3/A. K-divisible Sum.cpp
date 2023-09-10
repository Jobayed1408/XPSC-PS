#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n , x ;  cin>> n >> x;
	if(n <= x)
	{
		if(x%n == 0) cout << x/n << endl;
		else cout << x/n + 1 << endl; return;
	}
	if(n > x) 
	{
		if(n % x == 0) cout << 1 << endl;
		else cout << 2 << endl;
		return;
	}
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}