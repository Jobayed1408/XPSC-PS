#include<bits/stdc++.h>
using namespace std;
//const int N = 2 * 1e5;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c = -1;
		map<int, int> mp;
		for(int i=0; i<n; i++)
		{
			int x; cin>> x;
			mp[x]++;
			if(mp[x] >= 3) 
			{
				c = x;
				
//				cout<<x<<endl;
			}
		}
		
		cout<<c<<endl;
//		iterator it = mp.begin();
//		
//		while( it! = mp.end())
//		{
//			if
//			++it;
//		}
//		int n ;
//		cin>> n;
//		int arr[N];
//		for(int i=0; i<N; i++) arr[i] = 0;
//		
//		for(int i=0; i<n; i++)
//		{
//			int x; cin>>x;
//			arr[x]++;
////			cout<<arr[x]<<" ";
//		}
//		int v = -1;
//		
////		cout<<endl;
//		for(int i =0 ; i < N; i++)
//		{
//	//		cout<<arr[i]<<endl;
//			if(arr[i]>=3) 
//			{
//				v = i;
//				break;
//			}
//		}
//		cout<<v<<endl;
	}
	
}