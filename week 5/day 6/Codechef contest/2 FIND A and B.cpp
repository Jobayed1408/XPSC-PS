#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c;
//	int a[3];
//	for(int i=0; i<3; i++) cin>>a[i];
	cin>>a>>b>>c;
	if((a*b) % c == 0) cout<<a*b<<" "<<c<<endl;
	else if((b*c) %a == 0) cout<<b*c<<" "<<a<<endl;
	else if((a*c) %b == 0) cout<<a*c<<" "<<b<<endl;
	else cout<<-1<<endl;
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0; j<3; j++)
//		{
//			if(i == j) continue;
//			else 
//			{
//				
//			}
//		}
//	}
	}
	
}