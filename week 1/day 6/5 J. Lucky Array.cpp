#include<bits/stdc++.h>
using namespace std;

int main()
{
		int n ; cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++) cin>>arr[i] ;
		sort(arr, arr+n);
		int c=0;
		for(int i=0;i<n;i++)
		{
//			cout<<arr[0]<< " ";
			if(arr[0] == arr[i+1]) c++;
		}
		c++;
		if( c%2 !=0 ) cout<<"Lucky\n";
		else cout<<"Unlucky\n"; 
		
}