#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		int n; cin>>n;
		int ans  = 0;
		if(n%2 != 0)
		{
			for(int i=1; i<n; i++)
			{
				ans += i;
				cout<<i<<" ";
			}
			for(int i=1; i<200; i++)
			{
				ans += (n*i);
				if(ans % n == 0)
				{
					cout<<n*i<<endl;
	//				cout<< ans << " " << n<< " " << ans / (n*i)<< " " << ans%n << endl;
					break;
				}
			}
		}
		else 
		{
			int k = n;
			for(int i=2; i<n*2; i+=2)
			{
				ans += i;
				cout<<i<<" ";
			}
			for(int i=1; i<200; i++)
			{
				ans += (n*i);
				if(ans % k == 0)
				{
					cout<<n*i<<endl;
	//				cout<< ans << " " << n<< " " << ans / (n*i)<< " " << ans%n << endl;
					break;
				}
			}
		}
		
		
	}
}