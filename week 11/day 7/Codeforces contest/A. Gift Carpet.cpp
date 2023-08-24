#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , m;  cin >> n >> m;
	char arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>> arr[i][j];
		}
	}
	string s = "";
	int c = 0;
	for(int j=0; j<m; j++)
//	for(int i=0; i<n; i++)
	{
//		for(int j=0; j<m; j++)
		for(int i=0; i<n; i++)
		{
			if(c==0)
			{
				if(arr[i][j] == 'v') 
				{
					s+='v';
					c++;
					i++;
				}
			}
			else if(c==1)
			{
				if(arr[i][j] == 'i') 
				{
					s+='i';
					c++;
					i++;
				}
			}
			else if(c==2)
			{
				if(arr[i][j] == 'k') 
				{
					s+='k';
					c++;
					i++;
				}
			}
			else if(c==3)
			{
				if(arr[i][j] == 'a') 
				{
					s+='a';
					c++;
					i++;
				}
			}
			if(j == n-1) break;
//			else continue;
		}
		cout << j << " "  << c << " "<< s << endl;
	}
	string s2 = "vika";
	if(s == s2) cout << "yes\n";
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