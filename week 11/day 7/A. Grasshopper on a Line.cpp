#include<bits/stdc++.h>
using namespace std;

void sovle()
{
	int n , k; cin >> n >> k;
	if(n%k != 0) cout << 1 <<"\n" << n << endl;
	else 
	{
		cout << 2 << endl;
		cout << k-1 << " " << n - k + 1 << endl;
//		int x = (n/k);
//		if(x % k != 0)
//			cout << n/k << "  " << n - (n/k) << endl;
		
//		if(n < 0)
//		{
//			cout << n/k << "  " << n + (n/k) << endl;
//		}
//		else 
	}
}

int main()
{
	int t; cin>> t; 
	while(t--)
	{
		sovle();
	}
}