#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		 if(n == 0)cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
		 else {
			ll a=1, b = 2, c=0, d=0;
			
			for(int i=3; i<=100000; i++)
			{
				ll cur = n^i;
				if(cur == i || cur <=2) continue;
				c = i;
				d = cur;
				break;
			}
			if(c==0) cout<<-1<<endl;
			else cout<<a<<" "<<b<< " " <<c << " "<< d << " "<<endl;
			
		 }  
	}
}