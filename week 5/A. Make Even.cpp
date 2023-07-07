#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	
	while(t--)
	{
		//int n; cin>>n;
		//if(n%2 == 0) cout<<1<<endl;
		string s; cin>>s;
		bool flag = false;
		if( (s[s.length() -1 ] - '0') % 2 == 0) cout<<0<<endl;
		else if( (s[0] - '0') % 2 == 0) cout<<1<<endl;
		else
		{
			for(int i=1; i<s.length()-1; i++)
			{
				if(s[i] % 2 == 0) {
					flag = true; break;
				}
			}
		if(flag ) cout<<2<<endl;
		else cout<<-1<<endl;
		}
		
	}
}