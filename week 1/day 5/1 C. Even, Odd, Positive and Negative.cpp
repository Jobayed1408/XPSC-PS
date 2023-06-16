#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int e=0,o=0,p=0,ne=0;
	for(int i=0;i<n; i++)
	{
//		cin>>a[i];
		int x; cin>>x;
		if(x%2==0) e++;
		if(x%2!=0) o++;
		if(x>0) p++;
		if(x<0) ne++;
	}
	
	cout<<"Even: "<<e<<"\nOdd: "<<o<<"\nPositive: "<<p<<"\nNegative: "<<ne<<"\n";
	
}