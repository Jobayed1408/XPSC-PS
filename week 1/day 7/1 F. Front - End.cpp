#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	vector<int> v;
	for(int i=0;i< n; i++)
	{
		int x; cin>>x;
		v.push_back(x);
//		cout<<v[i] ;
	}
	int m = n;
	
	for(int i=0 , j=n-1; i<n/2; i++, j--)
	{
//		int j=n-1;
		cout<<v[i]<<" "<<v[j] <<" ";
//		v.erase(v.begin());
//		v.erase(v.end());
		
	}
	if(n%2!=0) cout<<v[n/2];
	
}