#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>> n;
	
	int ar[n+2] = {0};
	int l , r ; 
	map<int , long long >prefix;
	for(int i=1; i<=n; i++)
	{
		cin >> l >> r;
		prefix[l]++;
		prefix[r+1]--;
	}
	long long sum =0 , ans = 0;
	for(auto[idx , value] : prefix)
	{
		sum += value; 
//		cout << sum << " ";
		ans = max(ans , sum);
	}
	if(ans<=2) cout << "Yes\n" ;
	else cout << "No\n";
}