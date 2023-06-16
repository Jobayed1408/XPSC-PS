#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	bool flag = false;
	for(int i=2;i<=sqrt(n); i++)
	{
		if(n%i ==0 ) {
			flag = true;
			break;
		}
	}
	if(!flag) cout<<"YES\n";
	else cout<<"NO\n";
}