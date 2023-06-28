#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n ; cin >> n;
		if(n==3) cout<<-1;
		else
		{
			for(int i=0; i<n/2; i++)
			{
				cout<<n - i<<" ";
				
			}
//			cout<<"n = "<<n<<endl;
			int m = (n - n/2);
			for(int i=1; i<=m; i++)
			{
				cout<<i<<" ";
			}
//			for(int i=0; i<n; i++)
		}
		cout<<endl;
	}
}