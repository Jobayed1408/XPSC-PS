#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		if(n<=10) cout<<"Lower Double\n";
		else if(n>10 and n <=15) cout<<"Lower Single\n";
		else if(n>=16 and n<=25) cout<<"Upper Double\n";
		else if(n>25 and n<=30) cout<<"Upper Single\n";
	}
}