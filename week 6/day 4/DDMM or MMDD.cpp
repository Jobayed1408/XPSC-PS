#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c;
		char ch,ch2;
		cin>>a>>ch>>b>>ch2>>c;
		if(a <= 12 and b <= 12) cout<<"BOTH\n";
		else if(a>12 and b<=12) cout<<"DD/MM/YYYY\n";
		else if(a<=12 and b>12) cout<<"MM/DD/YYYY\n";
	}
}