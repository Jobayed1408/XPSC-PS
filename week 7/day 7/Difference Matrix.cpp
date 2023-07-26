#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		int n; cin>>n;
		int a[n][n];
		int m =  n*n;
		bool not_zero = false;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(m > 0 and !not_zero)
				{
					cout << m <<" ";
					m-=2;
				}
				else if(m <= 0 ) 
				{
					not_zero = true;
					m = n*n - 1;
				}
				if(m>0 and not_zero)
				{
					cout << m <<" ";
					m-=2;
				}
				
			}
			cout << endl;
		}
//		for(int i=0; i<n; i++)
		
	}
}