#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n , m ,k; cin>> n>> m>> k;
	long long int arr[m+1];
	for(long long int i=0; i<m; i++) cin>>arr[i];
	long long int x ; cin>> x;
	long long int ans = 0;
	for(long long int i=0; i<m; i++)
	{
		long long int a = x^arr[i];
		if(__builtin_popcount(a) <= k)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	
}