#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>  t;
	while(t--)
	{
		bool b = true;
		string s; cin>> s;
		for(int i=0; i<s.size(); i+=2 )
		{
			if(s[i] != s[i+1] and s[i] == '(' and s.size() == 2 )
			{
				b = false;
			}
		}
		string s2;
		if(b) 
		{
			cout <<"Yes\n";
				if(s[0]==s[1] || (s.size() & 1)) 
				{
					for(int i=0; i<s.size(); i++)
					{
						s2 += "()";
					}
				}
				else 
				{
					for(int i=0; i<s.size(); i++)
					{
						s2 += "(";
					}
					for(int i=0; i<s.size(); i++)
					{
						s2 += ")";
					}
				}
			
//			for(int i=0; i<s.size(); i++)
//				s2 += ')';
			cout << s2 << endl;
		}
			else cout << "No\n";
	}
}