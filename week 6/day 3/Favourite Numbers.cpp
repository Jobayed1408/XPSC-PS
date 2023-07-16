#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n%2==0){
			if(n%7 == 0) cout<<"ALice\n";
			else cout<<"Charlie\n";
		}
		else{
			if(n%9 == 0) cout<<"Bob\n";
			else cout<<"Charlie\n";
		}
	}
}