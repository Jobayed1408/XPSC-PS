#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n ; cin >> n;
		int ar[n+1];
		for(int i=1; i<=n; i++) cin >> ar[i];
		
		int m = 0;
		for(int i=1; i<=n; i++)
		{
			m = max(m ,  ar[i] - i);
		}
		cout << m << endl;
		
	}
}