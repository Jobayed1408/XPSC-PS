#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , s  ,  r; cin>> n >>  s >> r;
	if(s-r <= 6)
	{
		cout << s - r << " " ; 
		n--;
	
		while(n != 0)
		{
			int ans  = r%n;
//			if(ans != 0)
//			{
				cout << r/n << " ";
				r = r - r/n;
				n--;
//			}
//			else 
//			{
//				for(int i=0; i<n ; i++)
//				{
//					cout << r/n <<  " ";
//				}
//				n = 0;
//			}
		}
	}
	cout << endl;
	
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve();
	}
}