#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;  i++)
	{
		cin>>a[i];
	}
	
	int k; cin>>k;
	int sum =0, mx = INT_MIN;
	int j = 0;
	for(int i=0;i<n-k; i++)
	{
		while(j<n)
		{
			if(j < k-1)
			{
				sum+=a[j];
				j++;
			}
			else{
				sum += a[j];
				mx = max(sum , mx);
				sum -=a[i];
				i++;
				j++;
//				cout<<sum<<" "<<mx<<endl;
			}
		}
		cout<<mx<<endl;
		
	}
	
}