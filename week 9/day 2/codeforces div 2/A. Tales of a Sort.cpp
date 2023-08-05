#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>>n;
		int ar[n];
		for(int i=0; i<n; i++) cin>> ar[i];
//		bool b= false;
//		int ma = ar[0] , mi = ar[0];
//		int max_index = 0, min_index = 0;
//		for(int i=1; i<n; i++) 
//		{
//			if(ar[i] > ma)
//			{
//				ma = ar[i];
//				max_index = i;
//			}
//			if(ar[i] < mi)
//			{
//				mi = ar[i];
//				min_index = i;
//			}
//			if(ar[i]< ar[i-1])
//			{
//				b = true; 
//			}
//		}
		int ans  = 0;
//		for(int i=0; i<n; i++)
//		{
//			for(int j=i+1; j<n; j++)
//			{
//				if(ar[i] > ar[j])
//				{
//					ans = max(ans , ar[i] - ar[j] + 1);
//				}
//			}
//		}
		for(int i=0; i<n; i++)
		{
			if(ar[i] < ar[i-1])
			{
				ans =  max(ans ,  ar[i-1]);
			}
		}
		cout << ans << endl;
////		if(b)
////		{
//			
////			cout << ma <<" "<<max_index << " " << mi <<" "<<min_index <<" " <<b << endl;
//		}
		
	}
}