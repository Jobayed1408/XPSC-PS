#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n; int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int q; cin>>q; 
	while(q--)
	{
		int sum=0;
		int i,j; cin>>i>>j;
		for(int a=i; a<=j; a++)
		{
			sum+=arr[a]; 
		}
		cout<<sum<<endl;
	}
	
	
	
}