#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int k, n; cin>> k >>n;
		int x = 1;
		int ar[n+1];
		ar[0] = 0;
		for(int i=1; i<=n; i++)
			ar[i] = i;
		int z = 0;
		for(int i=1, j =1; j<=k; i+=1 ,j++)
		{
			int y = x;
			
			x = ar[i-1] + y;
			if(x <= n and j<k-1) 
			{
				z = x;
				cout << x << " ";
			}
			else {
				z++;
				cout << z << " ";
			}
		}
		cout<<endl;
		
		
	}
}