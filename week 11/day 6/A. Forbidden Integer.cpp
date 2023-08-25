#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , k,x; cin>> n >> k >> x;
	bool b = 0;
	if(x == 1 and k==1) cout << "No\n";
	else if(x==1 and k==2 and ((n%k)!=0)) cout << "No\n";
//	else if( n== k) cout << "No\n";
	else 
	{
		cout << "Yes\n";
		if(x != 1)
		{
			cout << n << endl; 
			for(int i=0; i<n; i++)
				cout << 1 << " ";
		}
		else 
		{
			vector<int>v;
			if(n%2 == 0)
			{
				cout << n/2 << endl;
				for(int i=0; i<n; i+=2)
				{
					cout << "2 ";
				}
			}
			else if(n%3 == 0)
			{
				cout << n/3 << endl;
				for(int i=0; i<n/3; i++) cout << "3 ";
			}
			else
			{
				int a = n/3;
				int b = n%3;
				if(b==1)
				{
					
				cout << a+1 << endl;
				for(int i=0; i<n/3-1; i++)
					cout << 3 <<" ";
				cout << 2 <<" "<< 2 << endl;
				}
				else 
				{
					
				cout << a+1 << endl;
				for(int i=0; i<n/3; i++)
					cout << 3 <<" ";
				cout << 2 ;
				}
				
			}
		}
		cout << endl;
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
}