#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m,k , h; 
		cin>>n>>m>>k>>h;
		int ar[n];
		for(int i=0; i<n; i++) cin>>ar[i];
		queue<int> q;
		q.push(1);
		q.push(2);
		int ans = 0;
		for(int i=0; i<n; i++)
		{
			int diff = abs(h - ar[i]);
			bool flag1 = q.size() and diff%k==0;
			bool flag2 = q.size() and diff <= (m-1)*k;
			bool flag3 = q.size() and diff;
			
			if(q.size() and flag1 and flag2 and flag3) ans++;
		}
		cout<<ans<<endl;
	}
}