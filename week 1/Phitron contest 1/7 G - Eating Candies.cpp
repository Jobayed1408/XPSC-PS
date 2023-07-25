#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int arr[n+2];
		for(int i=1; i<=n; i++)
		{
			int x; cin>>arr[i];
			
		}
		int sum1=0;
		int sum2=0;
		for(int i=1 ; i<n; i++)
		{
			sum1+=arr[i];
		}
		sum2+=arr[n];
		cout<<sum1<<" "<<sum2<<endl;
//		int x  = n/2;
		int i=0, j=n;
		int k = 0;
		while(i<j)
		{
			if(sum1 == sum2)
			{
				cout<<i+k<<"\n";
				break;
			}
			else
			{
				if(sum1>sum2)
				{
					sum1-=arr[i];
					i++;
//					sum2+=arr[j];
//					j--;
				}
				else if(sum2>sum1) {
					sum2-=arr[j];
					j--;
					k++;
				}
			}
			
		}
		
	}
}