#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
	string s; cin>>s;
	
	for(int i=0; i<s.size(); i++)
	{
		freq[ s[i] -97 ]++;
	}
	bool check = false;
	char ch;
	for(int i=0; i<26; i++)
	{
		if(freq[i] == 0)
		{
			ch = i + 97;
			check = true;
			break;
		}
	}
	
	if(check) cout<<ch<<endl;
	else cout<<"None\n";
	
}