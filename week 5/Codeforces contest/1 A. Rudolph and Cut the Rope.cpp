#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>> t;
	while(t--)
	{
		int n ; cin>>n;
		int ans = 0;
		while(n--)
		{
			int x,y; cin>>x>>y;
			if(x>y) ans++;
		}
			cout<<ans<<endl;
	}
}