#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t; cin>>n>>t;
	int c=0;
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=n; j++)
		{
			for(int k=0; k<=n; k++)
			{
				if( i+j+k <=n && i*j*k<=t )	c++;
			}
		}
	}
	cout<<c<<endl;
	
}