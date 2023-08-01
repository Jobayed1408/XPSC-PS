#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n ; cin>>n;
		string s; cin>>s;
		bool ok = true;
		for(int i=0; i<n; i++)
		{
			char f = s[i];
			for(int j=i+1; j<n; j++)
			{
//				cout << (i &1) <<" "<<(j & 1) <<'\n';
				if(f == s[j] and ((i & 1) != (j & 1)) )
				{
					ok = false;
					break;
				}
			}
		}
		if(ok)  cout << "Yes\n";
		else cout << "No\n";
	}
}