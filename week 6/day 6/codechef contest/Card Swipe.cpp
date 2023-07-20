#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++) cin>>v[i];
		map<int, int> mp;
		int ans = 0; 
		int cnt = 0;
		for(int i=0; i<n; i++)
		{
			if (mp.find(v[i]) == mp.end())
			{
				cnt++;
				ans = max(cnt, ans);
				mp[v[i]]++;
//				cout<<mp[v[i]]<<endl;
			}
			else 
			{
				mp.erase(v[i]); // = -1;
				cnt--;
			}
		}
		cout<<ans<<endl;
		
	}
}