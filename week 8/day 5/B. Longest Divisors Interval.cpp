#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n ; cin>>n;
		int c = 0 , m =0; 
		for(ll i=1; i<10000; i++)
		{
			if(n%i == 0)
			{
				c++;
//				cout << i <<" ";
			}
			else 
			{
				m = max(m , c);
				c=0;
			}
		}
		cout << m <<endl;
	}
}