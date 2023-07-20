#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		int k = x+(z/30);
		int m = ceil(1.0* k / y);
		
		cout<<m<<endl;
		
	}
}