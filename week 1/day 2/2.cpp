#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	cin>>a;
	double ans =  0;
	
	int n = a*1000;
	int k = n%1000;
//	cout<<k<<endl;
//	if(k>=500) a++;
	ans = round(a);
	cout<<ans<<endl;
}