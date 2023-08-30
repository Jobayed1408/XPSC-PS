#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin>> n;
		int arr[n];
		for(int i=0; i<n; i++) cin>> arr[i];
		
		int ans  =false;
		for(int i=0; i<n-1; i++)
		{
			for(int j= i+2; j<n; j++)
			{
				if(arr[i] == arr[j]) 
				{
					ans = true; 
					break;
				}
			}
		}
		if(ans) cout << "Yes\n";
		else cout << "No\n";
	}
}