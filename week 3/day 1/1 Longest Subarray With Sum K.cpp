#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k; cin>>n>>k;
	int arr[n];
	for(int i=0; i<n; i++) cin >> arr[i];
	
	int i=0, j =0;
	int sum = 0;
	int ma = INT_MIN;
	while(j<n)
	{
		sum+=arr[j];
		if(sum > k)
		{
			sum -= arr[i];
			i++;
		}
		else if(sum == k)
		{
			ma = max(ma, j-i+1);
		}
		j++;
	}
	cout<<ma<<endl;
	
}