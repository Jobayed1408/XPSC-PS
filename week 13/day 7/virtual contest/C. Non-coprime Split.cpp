#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
	for(int i=2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 1;
	}
	return 0;
}
void solve()
{
	int n , m ; cin>> n >> m;
		bool b = 0;
		for(int i=n; i<=m; i++)
		{
			if(is_prime(i))
			{
				for(int j=2; j<=sqrt(i); j++)
				{
					if(i % j == 0)
					{
						cout << j << " " << i-j << endl;
						b=1;
						return;
					}
//					if(j == 3500 ) 
//					{
//						b = 1;
//						break;
//					}
				}
			}
//			if(b) break;
		}
		if(!b) 
		{
			cout << -1 << endl;
			return;
		}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
}