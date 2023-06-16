#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
//		cout<<"test case t: "<<t<<endl;
		ll n; cin>>n;
		ll arr[n+1];
		int c=0;
		arr[0] = 0;
		for(ll i=1; i<=n; i++)
		{
			cin>>arr[i];
		}
		ll max = arr[1];
		for(int i=1; i<=n; i++)
		{
			if(arr[i] > max) max = arr[i];
			if( arr[i] != i && arr[i] > arr[i-1] and arr[i] >= max )
			{
				c+=(arr[i] - arr[i-1] - 1);
			}
			
		}
		
		cout<<c<<endl;
	}
}
