#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int ar[n];
	    for(int i=0; i<n; i++) cin>> ar[i];
	    long long sum = 0;
	    for(int i=0; i<n; i++)
	    sum+= ar[i];
	    
	    if(sum%2==0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
