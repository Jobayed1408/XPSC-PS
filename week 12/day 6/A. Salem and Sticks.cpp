#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int n; 
//	int i = 0;
//	while(cin>> n)
//	{
//		i++;
//		cout << i <<endl;
//	}
	int n; cin>> n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>> arr[i];
	sort(arr, arr+n);
	
	int mid = n/2;
	if(n>2) mid++;
	int ans  = 0;
	int j;
	int mi = 100000;
	int tmin = 100;
	for(int t=1; t <101; t++)
	{
		j = 0;
		for(int i=0; i<n; i++)
		{
			if(abs(arr[i]-t)>1)
				j += abs(arr[i] - t ) - 1;
//			if(i == n/2) continue;
//			if(arr[i] == arr[n/2]) continue;
//			if(i<n/2)
//			{
//				ans += ( arr[n/2]-1 - arr[i] );
//			}
//			else 
//			{
//				ans += (arr[i] -1 - arr[n/2] );
//			}
		}
		if(j  < mi)
		{
			mi = j; tmin = t;
		}
	}
	cout << tmin <<  " " <<mi << endl;
	
}