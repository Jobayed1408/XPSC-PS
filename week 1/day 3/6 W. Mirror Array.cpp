#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  a,b;
	cin>>a>>b;
	int ar[a][b];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cin>>ar[i][j];
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=b-1;j>=0;j--)
		{
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
}