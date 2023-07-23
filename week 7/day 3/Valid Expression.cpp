#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; 
	while(t--)
	{
		int n , k; cin>>n>>k;
		
		if( (k >= -(n-1)) and k <= (n+1) )
		{
			string s = "";
			int c= 1, cnt = n;
			while(1)
			{
				if( (k-c)>0  and cnt > 0)
				{
					s+='+';
					cnt--;
					c++;
				}
				else if( (k-c)<0  and cnt>0 )
				{
					s+='-';
					cnt--;
					cnt--;
				}
				else if( (k-c)==0 and cnt>0 )
				{
					s+='*';
					cnt--;
				}
				else if(!cnt) break;
			}
				cout << s <<endl;
		}
		else cout<<-1<<endl;
	}
}