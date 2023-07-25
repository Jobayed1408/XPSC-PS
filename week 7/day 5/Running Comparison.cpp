#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n] , b[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	    for(int i=0; i<n; i++) cin>>b[i];
	    int c = 0;
	    for(int i=0; i<n; i++)
	    {
	        int mi = min(a[i] , b[i]);
	        int ma = max(a[i] , b[i]);
	        if(ma <= 2*mi) c++;
	    }
	    cout << c << endl;
	    
	}
	return 0;
}
