#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int cnt = 0;
		string s; cin>>s;
//		string str = "s";
		for(int i=0; i<n-1; i++)
		{
			char ch = s[i];
			for(int j=i+1; j<n; j++)
			{
				if(ch == s[j])
				{
					cout<<s[j];
					i = j;
					break;
				}
			}
		}
		cout<<endl;
//		cout<<str;
	}
}