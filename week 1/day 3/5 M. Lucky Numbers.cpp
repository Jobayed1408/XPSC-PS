#include<bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
	
	while(n!=0)
	{
		int i = n%10;
		
		if( (i!=4 and i==7) or (i!=7 and i==4) or (i==4 and i==7) ) n/=10;
		else return false;
//		n/=10;
	}
	return true;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int c=0;
	for(int i=a; i<=b; i++)
	{
		
		if(lucky(i) == true) {
			cout<<i<<" ";
			c++;
		}
		
	}
	if(c==0) cout<<"-1\n";
		
	}