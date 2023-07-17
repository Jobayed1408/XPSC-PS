#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		float k = (1.0*n/100)*10;
		float l = n - k;
		if(l < m) cout<<"ONLINE\n";
		if(l > m) cout<<"DINING\n";
		if(l == m) cout<<"EITHER\n";
	}
}