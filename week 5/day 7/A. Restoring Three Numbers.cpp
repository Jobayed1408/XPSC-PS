#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a[4]; 
	for(int i=0; i<4; i++) cin>>a[i];
	
	sort(a , a+4);
	cout<<a[3]-a[0]<<" "<<a[3] - a[1]<<" "<<a[3] - a[2]<<endl;
}