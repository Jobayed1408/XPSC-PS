#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		ll n , k; cin>>n>>k;
		ll sum = 0;
		if(n < k) cout<<"No\n";
		else if(n%2 == 0 and k%2 == 0)
		{
			if(k*2 <=n)
			{
				cout<<"Yes\n";
				for(ll i=0; i<k-1; i++)
				{
					sum+=2;
					cout<<2<<" "; 
				}
				cout<<n - sum<<endl;
			}
			else if((n -( k - 1))%2 != 0)
			{
//				ll b = n -( k - 1);
//				if(b%2 != 0)
//				 {
				cout<<"Yes\n";
				for(ll i=0; i<k-1; i++)
				 {
					cout<<1<<" ";
				}
				 cout<< n -( k - 1) <<endl;
//				}
			}
			else cout<<"No\n";
		}
		else if(n%2 == 0 and k%2 != 0)
		{
			if(k*2 <= n)
			{
				cout<<"Yes\n";
				for(int i=0; i<k-1; i++)
				{
					sum+=2;
					cout<<2<<" ";
				}
				cout<<n-sum<<endl;
			}
			else cout<<"No\n";
		}
		else if(n%2 != 0 and k%2 == 0)
		{
			cout<<"No\n";
		}
		else if(n%2 != 0 and k%2 != 0)
		{
			if(n - (k-1) %2 != 0)
			{
				cout<<"Yes\n";
				for(int i=0; i<k-1; i++)
				{
					cout<<1<<" ";
				}
				cout<< n- (k-1)<<endl;
			}
			else cout<<"No\n";
		}
		
		
	}
}