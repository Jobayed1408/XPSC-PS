#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		string s; cin >> s;
		char mi = 'z';
		for(int i = s.size()-1; i>=0; i--)
		{
			mi = min(mi , s[i]);
		}
		cout << mi << " ";
		for(int i=0; i < s.size(); i++)
		{
			if(s[i] == mi) mi = '1';
			else cout << s[i];
		}
		cout << endl;
	}
}