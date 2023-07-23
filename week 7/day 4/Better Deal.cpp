#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n , k;
	    cin >> n >> k;
	    n = 100 - n;
	    k = 200 - 2*k;
	    if(n == k) cout<<"BOTH\n";
	    else if(n < k) cout<<"FIRST\n";
	    else cout<<"SECOND\n";
	}
	return 0;
}
