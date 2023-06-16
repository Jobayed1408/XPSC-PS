#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s; cin>>s;
		int n; cin>>n;
		string s1, s2;
		s1[0] = s[0]; //cout<<s1[0];
		s1[1] = s[1]; //cout<<s1[1];
		s2[0] = s[3]; //cout<<s2[0];
		s2[1] = s[4]; //cout<<s2[1];
		//cout<<s1.size()<<endl;
		string s3 ;
		s3[0] = s[0] ;
		s3[1] = s1[1];
		 s3[2] = s[3];
		  s3[3] = s[4];
		
		int a = 0, b=0;
//		cout<<"s3 = "<<s3<<endl;
		s = s3;
		int k1 = stoi(s1);
		
		int k2 = stoi(s2);
		int k3 = k1;
//		cout<<k1<<" "<<k2<<endl;
//		int k = stoi(s);
		if(n >=60)
		{
			 a = n/60;
			 b = n%60;
//			 if(a+k1 >= 24)
//			 {
//			 	 k1 = (a+k1 - 24);
//			 }
//			 a = stoi(a);
			  k1+=a;
			  k2+=b;
		}
		else
		{
			a = (60 - k2) ;
			
			if( n>=a )
			{
				k2 = (n-a);
				k1++;
			}
			else 
			{
				k2 += n;
			}
		}
		if(k1/10 == 0) s1 = "0"+to_string(k1);
		else s1 = to_string(k1);
		if(k2/10 == 0) s2 = "0"+to_string(k2);
		else s2 = to_string(k2);
		
		s = s1+s2;
//		cout<<s<<" "<<s3<<endl;
		int cnt = 0;
		while( k1 < 24 )
		{
			k1 = stoi(s1);
			k2 = stoi(s2);
			if(n >=60)
			{
				 a = n/60;
				 b = n%60;
//				  if(a+k1 >= 24)
//				 {
//					 k1 = (a+k1 - 24);
//				 }
	//			 a = stoi(a);
				 k1+=a;
				 k2+=b;
			}
			else
			{
				a = (60 - k2) ;
				
				if( n>=a )
				{
					k2 = (n-a);
					k1++;
				}
				else 
				{
					k2 += n;
				}
			}
			if(k1/10 == 0) s1 = "0"+to_string(k1);
			else s1 = to_string(k1);
			if(k2/10 == 0) s2 = "0"+to_string(k2);
			else s2 = to_string(k2);
			string s5 = s2;
			reverse( s5.begin() , s5.end());
			if(s1 == s5) cnt++;
		}
		cout<<cnt<<endl;
	}
}