#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n , x ;  cin>> n >> x;
	if(x > n) {cout << 1 << endl; return ;}
	if(x == n) {cout << 2 << endl; return ;}
	int cnt = INT_MAX;
	int m  = n;
	int carry = 0;
	if(x == 1) 
	{
		x++; carry++;
	}
	for(int i = x; i<=x+5; i++)
	{
		int ans  = 0;
		m = n;
		while(m != 0 )
		{
			m = m / i;
			ans++;
		}
		cnt = min(cnt , ans+i-x+carry);
	}
	cout << cnt << endl; return;
}
int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}