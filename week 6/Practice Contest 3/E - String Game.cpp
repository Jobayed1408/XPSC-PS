#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		int c1=0, c2 = 0; 
		
		for(int i=0; i<n; i++)
		{
			if(s[i] == '0') c1++;
			else c2++;
		}
		int c = min(c1,c2);
		if(c%2 == 0) cout<<"Ramos\n";
		else cout<<"Zlatan\n";
	}
}
