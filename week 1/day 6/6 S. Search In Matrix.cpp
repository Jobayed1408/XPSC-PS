#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	int x;
	cin>>x;
	bool ok = false;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j] == x) {
				ok = true; break;
			}
		}
	}
	if(ok) cout<<"will not take number\n";
	else cout<<"will take number\n";


}