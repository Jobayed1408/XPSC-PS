#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n];
		for(int i=0; i<n; i++) cin>>arr[i];
		int mini = INT_MAX;
//		int x=-1, y=-1;
		for(int i=0; i<n; i++)
		{
			int x = -1;
			if(i-1 >= 0) 
				x = max(x , abs( arr[i] - arr[i-1] ) );
			if(i+1<n)
				x = max(x , abs( arr[i] - arr[i+1] ) );
			mini = min(mini,x);

		}
		cout<<mini<<endl;
		
	}
}