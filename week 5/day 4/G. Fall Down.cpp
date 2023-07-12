#include<bits/stdc++.h>
using namespace std;
const int N = 100;
char grid[N][N];
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int m , n; cin>>m>>n;
//		int arr[m][n];
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>grid[i][j];
//				char x; cin>>x;
//				if(x=='.') grid[m][n] = 1;
//				if(x=='*') grid[m][n] = 2;
//				if(x=='o') grid[m][n] = 0;
			}
		}
		
		for(int i=m-2; i>=0; i--)
		{
			for(int j=0; j<n; j++)
			{
				if(grid[i][j] == '*')
				{
					int k = i;
					while(k<m)
					{
						if(grid[k+1][j]=='o' || grid[k+1][j] == '*') break;
						if(grid[k+1][j] == '.')
							swap(grid[k][j] , grid[k+1][j]);
						k++;
					}
				}
			}
		}
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<grid[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		
	}
}