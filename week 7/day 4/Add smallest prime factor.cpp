#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ; cin>>t;
	while(t--)
	{
		long long n , k , cnt = 0; cin>>n>>k;
		long long ans = n;
		if(n%2 != 0)
		{
			for(int i=2; i<=n; i++)
			{
				if(n%i == 0) 
				{
					ans += i;
					cnt++;
					break;
				}
				
			}
		}
		if(ans >= k) cout<<cnt<<endl;
		else if(k%2 != 0) 
		{
			k++;
			long long x = k - ans;
			cnt += x/2;
			cout<< cnt <<endl;
		}
		else 
		{
			long long x = k - ans;
			cnt += x/2;
			cout<< cnt <<endl;
			
		}
		
	}
}