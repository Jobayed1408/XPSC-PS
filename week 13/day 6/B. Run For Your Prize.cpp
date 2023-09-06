#include <bits/stdc++.h>
#define int long long
using namespace std;
main(){
	int n,i; cin>>n; int a[n];
	for (i=0;i<n;i++){
		cin>>a[i];
		a[i]=min(a[i]-1,1000000-a[i]);
	}
	sort(a,a+n); 
	cout<<a[n-1];
}