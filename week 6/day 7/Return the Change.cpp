#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t; while(t--)
	{
		int n; cin>>n; 
		if(n<=4) cout<<100<<endl;
		else if(n<=14) cout<<90<<endl;
		else if(n<=24) cout<<80<<endl;
		else if(n<=34) cout<<70<<endl;
		else if(n<=44) cout<<60<<endl;
		else if(n<=54) cout<<50<<endl;
		else if(n<=64) cout<<40<<endl;
		else if(n<=74) cout<<30<<endl;
		else if(n<=84) cout<<20<<endl;
		else if(n<=94) cout<<10<<endl;
		else cout<<0<<endl;
	}
}