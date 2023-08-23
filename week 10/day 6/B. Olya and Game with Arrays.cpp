#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int q; cin>> q;
		vector<long long  > v1,v2;
		while(q--)
		{
			
			int n; cin>>n; int ar[n];
			for(int i=0; i<n; i++) cin>> ar[i];
//			int m ; cin>>m; int ar2[m];
//			for(int i=0; i<m; i++) cin>> ar2[i];
			sort(ar, ar+n);
			v1.push_back(ar[0]);
			v2.push_back(ar[1]);
			
		}		
		
		sort(v1.begin() , v1.end() );
		sort(v2.begin() , v2.end() );
		long long ans = 0;
		for(int i=1; i<v2.size(); i++) ans += v2[i];
//		for(int i=1; i<v2.size(); i++) ans += v2[i];
		ans += v1[0];
		cout << ans << endl;
	}
}