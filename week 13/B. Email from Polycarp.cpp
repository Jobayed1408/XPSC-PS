#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s ,t ; cin >> s >> t;
	bool b = true;
	int si = min(s.size() , t.size());
	if(s.size() > t.size()) b = false;
	if(s[0] != t[0]) b = false;
	if(s[s.size()-1]  != t[t.size() - 1]) b = false;
	int x = 0;
	for(int i=0, j = 0; i<si; i++)
	{
		if(s[i]== t[j])
		{
//			j++;
			while(s[i] == t[j] and j < t.size())
			{
//				if(i >= s.size()) break;
				j++;
				
				if(t[j] == s[i+1])
				{
					i++; 
				}
//				cout << i << " " << j << " "<< t[j]<< endl;
			}
			if(j == t.size()) x= 1;
		}
		else {
			b = false; break;
		}
//		if(i == s.size()-1 and j != t.size() ) 
//		{
//			cout << i << " " <<j << endl;
////			b = false; break;
//		}
	}
//	set<char > s1 , s2;
//	for(int i=0; i<s.size(); i++) s1.insert(s[i]);
//	for(int i=0; i<t.size(); i++) s2.insert(t[i]);
//	if(s1.size() == s2.size())
	if(b and x) cout << "YES\n";
	else cout << "NO\n";
}

int main()
{
	int t; cin>> t; 
	while(t--)
		solve();
}