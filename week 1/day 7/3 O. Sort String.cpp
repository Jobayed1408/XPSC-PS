
#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
	int n; cin>>n; //1e7
	char s;
	
	
	for(int i=0;i<n; i++) //1e7
	{
		cin>>s;
		int x= s - 'a';
		freq[x]++;
	}
	
	for(int i=0; i<26; i++) //26*1e7																
	{
		for(int j=0; j<freq[i]; j++)
		{
			char x = i+'a';
			cout<<x;
		}
	}
}
