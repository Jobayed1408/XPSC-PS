#include<bits/stdc++.h>
using namespace std;

void make_zero(string s , int a)
{
	int n = s.size();
	if(a == 0)
	{
		for(int i=0; i<n; i++)
		{
			s[i] = '0';
		}
		string s2 = "1" ;
		s2 += s;
		s =s2;
	}
	else 
	{
		for(int j=a; j < n; j++)
		{
			s[j] = '0';
		}
	}
	cout << s << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int find_greater = 0;
		bool trigger = 0;
		string s; cin>> s;
		int n = s.size();
	
		if(s[0] >='5') 
		{
			find_greater = 0;
			trigger = 1;
		}
		else 
		{
			for(int i=n-2; i>=0; i-- )
			{
				if( i != 0)
				{
					if(s[i+1] >= '5' and s[i] != '9')
					{
						s[i] = s[i] + '1' - '0';
						find_greater = i+1;
						trigger = 1;
					}
					else if(s[i+1] >= '5' and s[i] == '9')
					{
						//s[i+1] = '0' ; 
						find_greater = i+1;
						trigger = 1;
					}
//					else if(s[i+1] >='5' and s[i] != '9')
//					{
//						s[i] = s[i] + '1' - '0'; 
//						find_greater = i+1;
//					}
				}
				else 
				{
					if(s[i+1] >='5' and s[i] >='4' )
					{
						find_greater = i ;
						trigger = 1;
//						string s2 = "1" ;
//						s2 += s;
//						s =s2;
//						for(int i=1; i<s.size(); i++)
//						{
//							
//							s[i] = '0';
//						} 
					}
					else if(s[i+1] >='5' and s[i] <='3' ) 
					{
						s[i] = s[i] + '1' - '0';
						find_greater = i+1;
						trigger = 1;
//						for(int j=i+1; j < n; j++)
//						{
//							s[j] = '0';
//						}
					}
//					cout 
				}
			}
		}
			if(trigger) {
				
				make_zero(s , find_greater );
			}
			else cout << s << endl;
		
	}
}