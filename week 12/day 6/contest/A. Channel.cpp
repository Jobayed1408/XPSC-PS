#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int x, a, b; cin>> x >> a>> b;
	string s; cin >> s;
	int c = 0;
	int plas = 0 , minas = 0;
	for(int i=0; i<s.size(); i++)
	{
//		if(c == x and minas == 0)
//		{
//			cout <<"YES\n"; return;
//		}
		
		if(s[i] == '-') 
		{
			minas++;
			c--;
		}
		else 
		{
			plas++;
			c++;
		}
	}
	if( x ==  a) 
	{
		cout << "YES\n";
		return;
	}
	if(minas == plas)
	{
		cout << "MAYBE\n";
		return;
	}
	if(x - a - c > 0)
	{
		cout <<"NO\n";
		return;
	}
	else 
	{
		cout << "YES\n";
		return;
	}
	
	
	if(a + plas  < x) 
	{
		cout << "NO\n";
		return;
	}
	if(a+plas >= x )
	{
		if(a + plas - minas < x) 
		{
			cout << "MAYBE\n"; 
			return;
		}
		else {
			cout <<"YES\n"; 
			return;
		}
	}
//	if(plas >= x)
//	{
//		cout <<"YES\n";
//		return;
//	}
	cout <<"NO\n";
}

int main()
{
	int t ; cin>> t;
	while(t--)
	{
		solve();
	}
}