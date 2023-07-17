#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s;
		cin>>s;
		int freq[26];
		for(int i=0; i<26; i++) freq[i] = 0;
		for(int i=0; i<n; i++)
		{
			freq[s[i] - 'a']++;
		}
		int c=0, even =0, odd = 0;
		for(int i=0; i<26; i++)
		{
			if(freq[i]>0)
			{
				c++;
				if(freq[i] % 2 == 0) even++;
				else odd++;
			}
		}
		int res = 0;
		if(n%2 == 0) 
		{
			if(odd==0) res = 1;
		}
		else {
//			if(odd == 1) res = 1;
			if(even>0 and odd == 1) res = 1;
			else if(even == 0 and odd == 1) res = 2;
		}
		cout<<res<<endl;
	}
}