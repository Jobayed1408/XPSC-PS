#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		n = (n*(n-1))/2;
		int ar[n];
		for(int i=0; i<n; i++)
		{
			cin >> ar[i];
		}
		sort(ar, ar+n);
	}
}