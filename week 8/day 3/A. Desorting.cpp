#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n; 
		long long arr[n];
		bool b=false; 
		for(int i=0; i<n; i++) cin>>arr[i];
		for(int i=0; i<n-1; i++)
		{
			if(arr[i] > arr[i+1]) b=true; //break;
		}
		
		long long mi = INT_MAX;
		for(int i=1; i<n; i++)
		{
			mi = min(mi , arr[i] - arr[i-1]) ; 
//			cout << mi << endl;
		}
		if(!b) 
			cout << mi/2 + 1 << endl; 
		else cout << 0 <<endl;
		
	}
}