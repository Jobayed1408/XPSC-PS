#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin>> s;
	bool b= false;
	for(int i=0; i<s.size(); i++)
	{
		for(int j=i+1; j<s.size(); j++)
		{
			if(s[i] == '1' and s[j] == '3') b = true;
//			else cout << 31 << endl;
		}
		
	}
	if(b ) 
		cout << 13 << endl;
	else 
		cout << 31 << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
		solve();
}>> s;
	bool b= false;
	for(int i=0; i<s.size(); i++)
	{
		for(int j=i+1; j<s.size(); j++)
		{
			if(s[i] == '1' and s[j] == '3') b = true;
//			else cout << 31 << endl;
		}
		
	}
	if(b ) 
		cout << 13 << endl;
	else 
		cout << 31 << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
		solve();
}