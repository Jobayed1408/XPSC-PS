#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int t; cin>>t;
//	while(t--)
//	{
//		
//	}

	int n; cin>>n;
	string s; cin>>s;
	int c =0 ;
	string s2;
	string a = "ba";
	string b = "ab";
	for(int i=0; i<n; i+=2)
	{
		if(s[i]==s[i+1]) 
		{
			c++;
			if(s[i] == 'a') s2+=b;
			else s2+=a;
		}
		else {
			s2+=s[i];
			s2+=s[i+1];
		}
	}
	
//	for(int i=0; i<n;i+=2)
//	{
//		if(s[0] == 'a')
//		s2+=a;
//	}
	cout<<c<<endl;
//	if(c == 0) cout <<s <<endl; 
//	else 
		cout<<s2<<endl; 
}