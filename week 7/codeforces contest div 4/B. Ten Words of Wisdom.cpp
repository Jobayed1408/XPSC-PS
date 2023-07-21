#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<pair<int,int>>v;
		for(int i=1; i<=n; i++)
		{
			int a,b; cin>>a>>b;
			
			if(a<=10) v.push_back({i , b});
			
		}
//		cout<<v.size()<<endl;
		int m = -1;
		for(int i=0; i<v.size(); i++)
		{
			m = max(m , v[i].second);
		}
		
		for(int i=0; i<v.size(); i++)
		{
//			cout<<v[i].second<<endl;
			if(v[i].second == m) cout<<v[i].first<<endl;
		}
		
//		cout<<m<<endl;
	}
}