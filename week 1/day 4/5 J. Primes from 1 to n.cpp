#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 7;
int visited[N];
void check(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		for(int j=i*i;j<=n;j+=i)
		{
			visited[j] = 1;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(visited[i]!=1) cout<<i<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	check(n);
}