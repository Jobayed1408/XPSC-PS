#include<bits/stdc++.h>
using namespace std;

void solve()
{
	     int n;	cin >> n;
		vector<int> v(n);
		bool b = true;
		for(int i=0; i<n; i++) 
		{
			cin >> v[i];
			if(v[i] > 0 ) b = false;
		}
		if(b) 
		{
			cout  << 0 << '\n' ;
			return;
		}
		vector<pair<int, int>> ans;
		
		for(int i=0; i<n;){
			int xr = 0, k = i;
			for(int j=i; j<n; j++){
				xr ^= v[j];
				if(xr == 0) k = j;
			}
			ans.push_back({i, k});
			i = k+1;
		}
		
		cout << ans.size() << "\n";
		
		for(auto [a, b] : ans)
		{
			cout << a+1 << " " << b+1 << "\n";
		}
}
int main(){
	int t;	cin >> t;
	while(t--)
	{
		solve();
	}
}