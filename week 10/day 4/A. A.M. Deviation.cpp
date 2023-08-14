#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n = 3 ;
		int ar[n+1];
		for(int i=1; i<=n; i++) cin >> ar[i];
		sort(ar+1, ar+n+1); 
		int a = ar[3] + ar[1];
		int b=a -  2 * ar[2];
		
		if(b%3 == 0) cout << 0 << endl;
		else cout << 1 << endl;
		
	}
}