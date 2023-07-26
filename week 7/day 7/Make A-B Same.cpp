#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n] , b[n] ;
	    for(int i=0; i<n; i++) cin>> a[i];
	    for(int i=0; i<n; i++) cin>> b[i];
	    int one_count = 0;
	    for(int i=0; i<n; i++)
	    {
			if(a[i] == 1) one_count++;
	    }
	    
	    bool ans = true;
	    if(a[0] != b[0] || a[n-1] != b[n-1])
	    {
			ans = false;
//			cout << "No"
	    }
	    else
	    {
			for(int i=1; i< n-1; i++)
			{
				if(a[i] != b[i] and b[i] == 0)
				{
					ans = false;
				}
				else if(a[i] != b[i] and a[i] == 0 and !one_count)
				{
					ans = false;
				}
			}
	    }
	    if(ans ) cout<< "Yes\n";
	    else cout<<"No\n";
	    
	}
	return 0;
}
