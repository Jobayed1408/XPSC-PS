#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t; 
	while(t--)
	{
		int n , k = INT_MAX;
		cin >> n;
		int a, b ; 
		vector<pair<int , int > > v;
		for(int i=0; i<n; i++)
		{
			cin >> a >> b;
			v.push_back({a , b});
		}
		for(int i=0; i<v.size(); i++)
		{
			k = min(v[i].first + (v[i].second-1 )/2 , k);
		}
		cout << k << endl;
	}
}