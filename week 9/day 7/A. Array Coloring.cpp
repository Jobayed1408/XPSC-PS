#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		int ar[n];
		int sum = 0;
		for(int i=0; i<n; i++)
		{
			cin >> ar[i];
			sum += ar[i];
		}
		int sum2  = sum;
		int s3 = 0;
		bool b = 0;
		for(int i=0; i<n; i++)
		{
			sum -= ar[i];
			s3 += ar[i];
			if( (s3&1)==(sum&1) )
			{
				b=1;
				break;
			}
			for(int j=0; j<n; j++)
			{
				if(i==j) continue;
				sum -= ar[j];
				s3 += ar[j];
				if( (s3&1)==(sum&1) )
				{
					b=1;
					break;
				}
				for(int k=0; k < n; k++)
				{
					if(i==j and i==k) continue;
					else
					{
//						sum += ar[j] ;
						sum -= ar[k] ;
						s3 += ar[k] ;
						if( (s3&1)==(sum&1) )
						{
							b=1;
							break;
						}
					}
				}
			}
		}
			if(b) cout << "Yes\n";
			else cout << "No\n";
		
	}
}