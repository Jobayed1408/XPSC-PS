#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n , l , r, k ;
		cin >> n>> l>> r>> k ;
		long long a[n] ;
		for(long long i=0; i<n; i++) cin>> a[i] ; 
		sort(a,a+n);
		long long ans  = 0 ; 
		long long cnt = 0 ; 
		for(long long i=0; i<n; i++)
		{
			if(a[i] >=l and a[i] <= r)
			{
				if(ans + a[i] <= k)
				{
					ans += a[i];
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
