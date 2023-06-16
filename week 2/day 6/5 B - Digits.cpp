#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k; cin>>n>>k;
	int c=0;
	while(n>0)
	{
		n/=k;
		c++;
	}
	cout<<c<<endl;
	
}