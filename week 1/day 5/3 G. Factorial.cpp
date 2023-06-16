#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;cin>>t;
	while(t--){
		ll n; cin>>n;
		ll m=1;
		if(n==0) cout<<1<<endl;
		else{
			for(int i=1;i<=n;i++)
			{
				m*=i;
			}
			cout<<m<<endl;
		}
	}
}