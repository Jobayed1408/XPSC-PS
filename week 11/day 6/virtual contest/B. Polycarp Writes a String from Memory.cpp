#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin>> s;
	int freq[26] = {0};
	int cn = 0 , ans = 0;
	set< char > st;
	st.clear();
	for(int i=0; i<s.size(); i++)
	{
		st.insert(s[i]);
		if(st.size()==3) 
		{
			ans++;
			while(st.size() == 3)
			{
				i++;
				st.insert(s[i]);
				if(st.size() == 4) i--;
//				i++;
			}
//			cout << s[i]<<" ";
			st.clear();
		}
		if(i+1 == s.size() and st.size() >0 and st.size() <=2) ans++;
//		char a1 , a2;
//		if(cn == 0) 
//		{
////			if(i+1 == s.size()) ans++;
//			a1 = s[i];
//			cn++;
//		}
//		if(cn == 1)
//		{
////			if(i+1 == s.size()) ans ++;
//			if(a1 != s[i]) 
//			{
//				a2 = s[i];
//				cn++;
//			}
//		}
//		else
//		{
//			if(a1 != s[i] and a2 != s[i])
//			{
//				ans++;
//				cn = 0;
//			}
//		}
//		if(i+1 ==  s.size() and cn >0 and cn < 3) ans++;
	}
	cout << ans << endl;
}

int main()
{
	int t; cin>> t;
	while(t--)
	{
		solve() ;
	}
}