#include<bits./stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int sum = 0;
		int n;
		cin>>n;
		
		int freq[26];
		for(int i=0;i<26; i++)
		{
			freq[i] = 0;
		}
		
		for(int i=0; i<n; i++)
		{
			char x; cin>>x; 
			int k = x - 'A';
//			cout<<sum+k<<" ";
			if(freq[k] == 0) freq[k]+=2;
			else freq[k]++;
		}
		for(int i=0; i<26; i++)
		{
			sum+=freq[i];
		}
		cout<<sum<<endl;
		
	}
}