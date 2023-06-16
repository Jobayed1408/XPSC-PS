#include<bits/stdc++.h>
using namespace std;
int fre[26];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin>>s;
    
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
		fre[s[i] - 'a']++;
    }
    int e=0, o = 0;
    for(int i=0; i<26; i++)
    {
//    	cout<<fre[i]<<endl;
		if(fre[i]>0)
		{
			if(fre[i] % 2 == 0) e++;
			else o++;			
		}
    }
    if(o>1) cout<<"NO\n";
    else cout<<"YES\n";
    
}