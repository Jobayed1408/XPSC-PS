#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n; 
	int m = n;
	int sum = 0;
	int k = 1;
	int l = n+1;
	for(int i=1; i<=2*n; i++)
	{
		if(i<=n)
		{
			if(i&1)
			{
				cout << 2*m << " ";
				m--;
			}
			else 
			{
				cout << i <<" ";
			}
		if(i == n) cout << endl;
		}
		else 
		{ 
//			if(i<=n)
//			{
				if(i&1)
				{
					cout << k << " ";
					k+=2;
				}
				else 
				{
					cout << l <<" ";
					l+=2;
				}
			}
	}
	cout << endl;
//	m=n;
//	for(int i=1; i<=n/2; i++)
//	{
//		sum += (2*m);
//		m--;
//	}
//	for(int i=1; i<=n/2; i++)
//	{
//		sum -= (2*i);
//	}
//	sum += (2*n - 1);
//	cout << sum  << endl;
	
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}