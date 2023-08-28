#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;  cin >> t;
	while(t--)
	{
		int n ; cin >> n;
		
		int a[n][n];
		if(n&1)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					
					if(i==n/2 and j == n/2) cout << 2 << " ";
					else if(i == j) cout << 1 << " ";
					else if(i == n-j-1 ) cout << 1 << " ";
					else cout << 0 <<  " ";
				}
				cout << '\n';
			}
		}
		else
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					
//					if(i==n/2 and j == n/2) cout << 2 << " ";
				 if(i == j) cout << 1 << " ";
					else if(i == n-j-1 ) cout << 1 << " ";
					else cout << 0  <<" ";
					
				}
				cout << '\n';
			}
		}
	}
}
