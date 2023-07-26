#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int ar[n];
	    for(int i=0; i<n; i++) cin>> ar[i];
	    int m = 1000;
	    int c = 0;
	    for(int i=0; i<n; i++)
	    {
	        m = min(m , ar[i]);
	    }
	    for(int i=0; i<n; i++)
	    {
	    	if(m == ar[i]) c++;
	    }
	    cout << n - c << endl;
	    
	}
	return 0;
}
