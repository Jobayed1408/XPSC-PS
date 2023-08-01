#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n, k;
		int a , b, c;
		cin >> n >> k;
		int ar[n] , sum = 0;
		
		for(int i=0; i<n; i++) 
		{
			int x;
			cin>> x;
			sum += x;
			ar[i] = sum;
//			cout << ar[i]<<" ";
		}
		
		for(int i=0; i<k; i++)
		{
			int ans = sum;
			cin >> a>> b >> c;
			if(a>1)
				ans  = sum - ar[b-1] + ar[a-2];
			else 
				ans  = sum - ar[b-1] ;
			
//			for(int j=a-1; j<b; j++)
//			{
//				ans-=ar[j];
////			}
//			cout << ans << endl;
			ans += (b-a+1)*c;
//			cout << (b-a+1)*c << endl;
//			cout << ans << endl;
			if(ans & 1) cout << "Yes\n";
			else cout << "No\n";
		}
	}
}