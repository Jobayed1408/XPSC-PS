#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll n; cin>>n;
	ll arr[n];
	ll  sum = 0;
	for(ll  i=0; i<n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	
	sort(arr,arr+n);
	if(sum % 2 == 0) 
		{
			cout<<sum<<endl;
			
		}
	else
	{
		for(ll i=0; i<n; i++)
		{
			if( (sum - arr[i]) %2 == 0) 
			{
				cout<<sum - arr[i]<<endl; 
				break;
			}
		}
	}
	
}