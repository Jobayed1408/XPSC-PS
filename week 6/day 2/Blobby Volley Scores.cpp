#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		char server = 'A';
		int c = 0, cnta = 0;
		for(int i=0; i<n; i++)
		{
			if(s[i] == 'A' and server == 'A') cnta++;
			else if(s[i] == 'B' and server == 'A' ) server = 'B';
			else if(s[i] == 'B' and server == 'B' ) c++;
			else if(s[i] == 'A' and server == 'B' ) server = 'A';
		}
		cout<< cnta<<" "<<c<<endl;
	}
}