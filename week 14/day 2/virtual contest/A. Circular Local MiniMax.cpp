//#include<bits/stdc++.h>
//using namespace std;
//
//void solve()
//{
//	int n; cin >> n;
//	int ar[n+1];
//	map<int, int >mp;
//	for(int i=1; i<=n; i++) 
//	{
//		cin>> ar[i];
//		mp[ar[i]]++;
//		
//	}
//	ar[n+1] = -1;
//	for(auto i : mp)
//	{
//		if(i.second == 1) 
//		{
//			cout << -1 << endl; return;
//		}
//	}
//	int j = 1;
//	for(int i=1; i<=n ; i++)
//	{
////		int j = i-1;
//		if(ar[i] != ar[i+1])
//		{
//			cout <<j<< " ";
//			j = i+1;
//		}
//		else cout << i+1<< " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int t; cin>> t;
//	while(t--)
//		solve();
//}
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	int ar[n+1];
	map<int, int >mp;
	for(int i=1; i<=n; i++) 
	{
		cin>> ar[i];
		mp[ar[i]]++;
		
	}
//	ar[n+1] = -1;
	for(auto i : mp)
	{
		if(i.second == 1) 
		{
			cout << -1 << endl; return;
		}
	}
	int j = 1;
	for(int i=2; i<=n ; i++)
	{
//		j = i-1	;
		
		if(ar[i] == ar[i-1])
		{
			cout <<i << " ";
//			i++;
		}
		else 
		{
			cout << j << " ";
			j = i;
		}
		if(i == n) 
		{
			cout << j << endl;
			return;
		}
	}
	cout << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
		solve();
}