#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int x,y,z, sum =0;
		cin>>x>>y>>z;
//		vector<pair<int,int> >p;
		vector<int>v;
		for(int i=0; i<x; i++) {
			int a,b; cin>>a>>b;
			if(b == z) v.push_back(a);
//			p.push_back(make_pair(a,b));
		}
//		sort(p.rbegin() , p.rend());
//		int sum = 0;
//		for(int i=0; i<p.size(); i++)
//		{
//			if(p[i].second == z) v.push_back(p[i].first);
//		}
		sort(v.rbegin(), v.rend());
		if(v.size() == 0 || y>v.size() ) cout<<-1<<endl;
		else
		{
			for(int i=0; i<y; i++)
			{
				sum+=v[i];
			}
			
		cout<<sum<<endl;
		}
	}
}