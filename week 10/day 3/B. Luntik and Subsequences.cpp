#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin>> n;
		int ar[n];
		int a=0, b=0;
		for(int i=0; i<n; i++) 
		{
			cin >> ar[i];
			if(ar[i] == 0 ) a++;
			if(ar[i] == 1 ) b++;
		}
		
		cout << (1ll << a) * (ll)b << endl;
		
	}
}