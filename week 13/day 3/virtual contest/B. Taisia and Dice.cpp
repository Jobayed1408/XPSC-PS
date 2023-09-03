#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , s  ,  r; cin>> n >>  s >> r;
	if(s-r <= 6)
	{
		cout << s - r << " " ; 
		n--;
	
		while(n != 0)
		{
			int ans  = r%n;
			if(ans != 0)
			{
				cout << ans << " ";
				r = r - ans;
				n--;
			}
			else 
			{
				for(int i=0; i<n ; i++)
				{
					cout << r/n <<  " ";
				}
				n = 0;
			}
		}
	}
	else 
	{
		while(n != 0)
		{
			int ans  = s%n;
			if(ans != 0)
			{
				for(int i=0; i<ans ; i++)
				{
					cout << n << " ";
				}
				s = s - (ans * n);
				n =  n - ans; 

			}
			else 
			{
				if(n==1 ) cout << s << " ";
				else 
				{
					for(int i=0; i<n ; i++)
					{
						cout << s/n <<  " ";
					}
				}
				n = 0;
			}
		}

	}
	cout << endl;
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