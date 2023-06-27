#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int k , n; cin>> k >> n;
		int temp1 = 1 , temp2 = 1;
		
		for(int i=1; i<=k; i++)
		{
			cout<<temp1<<" ";
			if( (n- ( temp1+ temp2)) >= (k-i-1) )
			{
				temp1+=temp2;
				temp2++;
			}
			else 
			{
				temp1++;
			}
		}
		cout<<endl;
		
	}
}
