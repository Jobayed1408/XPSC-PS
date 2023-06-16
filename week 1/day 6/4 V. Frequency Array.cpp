#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n , m; cin>>n>>m;
		int freq[m+5];
		for(int i=1;i<=m;i++) freq[i] = 0;
		for(int i=1;i<=n;i++)
		{
			int x; cin>>x;
			freq[ x ]++;
		}
		for(int i=1;i<=m;i++)
		{
				cout<<freq[i]<<endl;
		}
		
}