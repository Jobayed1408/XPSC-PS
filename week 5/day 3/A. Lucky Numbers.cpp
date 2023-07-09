#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int l ,r; cin>>l >> r;
		int max = 0, ans = l;
		
		for(int i=l ; i<=r; i++)
		{
			string s = to_string(i);
			sort( s.begin(), s.end() );
			int cur = s[s.length() - 1]  - s[0];
			
			if(max<cur){
				 max=cur;
				 ans = i;
			}
			
			if(max == 9) break;
		}
		cout<<ans<<endl;
	}
}