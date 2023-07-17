#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c,d; cin>>a>>b>>c>>d;
		if((a+b+c)<d) cout<<"yes\n";
		else if((a+b+d)<c) cout<<"yes\n";
		else if((a+c+d)<b) cout<<"yes\n";
		else if((b+c+d)<a) cout<<"yes\n";
		else cout<<"no\n";
	}
}