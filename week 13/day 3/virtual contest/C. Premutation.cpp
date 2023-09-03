#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n;
	map<int , int > mp;
	int ar[n][n-1];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
//			int x;
//			cin >> x;
			cin >> ar[i][j];
			if(j == 0)
			{
				mp[ar[i][j]]++;
			}
			
		}
	}
	int ma = 0;
	if(mp[0] > mp[1]) 
		ma = mp[0];
	else ma = mp[1];
	cout << ma << endl;
	int freq[n+1] = {0};
	if(ar[0][0] == ma)
	{
		for(int i=0; i<n-1; i++)
		{
			cout << ar[0][i] << " " ;
		}
		
	}
//	int ma  = INT_MIN;
//	for(auto i : mp)
//	{
//		ma  = min(ma , i.second);
////		cout << i.first << " "  << i.second << endl;
//	}
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}