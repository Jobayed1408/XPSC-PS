#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t; 
	while(t--)
	{
		long long int n; cin>>n ; 
		if(n>1 and n <= 1000000)
			cout << 1<<" "<<1<<" "<<n-1<<endl;
		else if(n == 1) cout << -1 <<endl;
		else 
		{
			int k = n/1000000;
			if(n%1000000 == 0)
			{
				cout << k-1 << " "<< 1000000 << " " << 1000000<<endl;
			}
			else 
			{
					
				cout << k << " "<< 1000000 << " " << n%1000000   <<endl;
			}
		}
	}
}