#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t; cin>>t;
	while(t--)
	{
	    long long n , k , d;
	    cin >> n >> k;
	    d = abs(n-k);
	    if(n == k) 
	    {
	        if(n%2 == 0) cout<<"CHEFINA\n";
	        else cout<<"CHEF\n";
	    }
	    else if(n > k and d>=2) 
	    {
			cout<<"CHEF\n";
	    }
	    else if(n<k and d>=2) cout<<"CHEFINA\n";
	    
	    if(d == 1)
	    {
			if(n < k and n%2 != 0) cout<<"CHEF\n";
			else if((n < k and n%2 == 0) ) cout<<"CHEFINA\n";
			else if(n > k and n%2 == 0) cout << "CHEF\n";
			else cout<<"CHEFINA\n";
	    }
	    
	}
	return 0;
}
