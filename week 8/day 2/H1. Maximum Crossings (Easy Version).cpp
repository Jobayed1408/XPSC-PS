/**
* author: mj_riffu
* created: 2023-07-26 21:30:14
**/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
    	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0;i < n;i++)
		cin >> a[i];
	int ans = 0 ;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] >= a[j]) ans++;
		}
	}
	cout << ans <<endl;
    }
    return 0;
}