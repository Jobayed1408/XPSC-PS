#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>>n;
		int a1[n] , a2[n];
		for(int i=0; i<n; i++) cin>> a1[i];
		for(int i=0; i<n; i++) cin>> a2[i];
		
		int dif1 = -1 , dif2 = -1;
		
		for(int i=0; i<n; i++)
		{
			if(a1[i] != a2[i])
				{
					dif1 = dif2= i; break;
				}
		}
//		cout << dif1 <<" "<<dif2<<endl;
		while(dif1-1 >=0 and a2[dif1] >= a2[dif1-1] )
			dif1--;
		while(dif2+1 < n and a2[dif2] <= a2[dif2+1] )
			dif2++;
		cout << dif1+1 <<" "<< dif2+1 <<endl;
	}
}