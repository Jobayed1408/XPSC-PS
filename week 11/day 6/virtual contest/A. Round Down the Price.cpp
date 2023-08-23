#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin>> n;
	vector<int>a ;
	for(int i=0; i<=9; i++)
	{
		int k = pow(10 , i);
		a.push_back(k);
//		cout << a[i] <<" ";
	}
	
	for(int i=9; i>=0; i--)
	{
		if(n >= a[i] ) 
		{
			cout << n - a[i] << endl; return;
		}
	}
	
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve() ;
	}
}