#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
//		char a[51], b[51];
//		
		string s1 , s2;
		cin >>s1 >> s2;
		string s3 , s4;
		
		if(s1[s1.size()-1] > s2[s2.size()-1])
		{
			cout << "<\n";
		}
		if(s1[s1.size()-1] < s2[s2.size()-1])
		{
			cout << ">\n";
		}
		if(s1[s1.size()-1] == s2[s2.size()-1])
		{
			if(s1.size() == s2.size() ) cout<<"=\n";
			else 
			{
				if(s1[s1.size()-1] == 'S') 
				{
					if(s1.size() < s2.size() ) cout<<">\n ";
					else cout <<"<\n";
				}
				else if(s1[s1.size()-1] == 'L') 
				{
					if(s1.size() > s2.size() ) cout<<">\n ";
					else cout <<"<\n";
				}
			}
		}
		
//		for(int i=0; i<s1.size(); i++)
//		{
//			char ch = s1[i];
//			if(ch == 'S') s1[i] = '2';
//			if(ch == 'M') s1[i] = '3';
//			if()
//		}
		
	}
}