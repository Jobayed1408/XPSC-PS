#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
	string s1, s2, s3;
	int n;
	cin >> n;
	map<string, int> m;
	map<string, int> p1;
	map<string, int> p2;
	map<string, int> p3;
	for (int i = 0; i < n; i++)
	{
		cin >> s1;
		m[s1]++;
		p1[s1]++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> s2;
		m[s2]++;
		p2[s2]++;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> s3;
		m[s3]++;
		p3[s3]++;
	}
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	for (auto x : p1)
	{
		int tmp = m[x.first];
		if(tmp == 1)
			d1 += 3;
		else if( tmp == 2)
			d1 += 1;
	}
	for (auto x : p2)
	{
		int tmp = m[x.first];
		if(tmp == 1)
			d2 += 3;
		else if( tmp == 2)
			d2 += 1;
	}
	for (auto x : p3)
	{
		int tmp = m[x.first];
		if(tmp == 1)
			d3 += 3;
		else if( tmp == 2)
			d3 += 1;
	}
	cout << d1 << ' ' << d2 << ' ' << d3 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin >> tc;
	while (tc--)
	{
		solve();
	}
	return 0;
}