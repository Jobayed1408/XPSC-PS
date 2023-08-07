#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		sort(s.begin() , s.end() );
//		cout<<s<<endl;
		//		bool flag =  false;
		string s2 = "Timur";
		sort(s2.begin() , s2.end() );
//		cout<<s2<<endl;
		if(s ==  s2) cout<<"yeS\n";
		else cout<<"nO\n";
	}
}