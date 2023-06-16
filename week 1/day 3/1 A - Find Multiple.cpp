#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int k=0;
	bool flag = false;
	for(int i=1; i<=b; i++)
	{
		k = c*i;
		if(k>=a && k<=b) {
			flag = true;
			break;
		}
	}
	if(flag) cout<<k;
	else cout<<"-1\n";
}