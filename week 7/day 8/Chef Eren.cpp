#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; 
	while(t--)
	{
	    int x ,y , z; cin >>x>>y>>z;
	    int ans = 0;
	    int m = 0 , k = 0;
	    if(x & 1) m = x/2 + 1;
	    else m = x/2;
	    k = x - m;
	    ans = ( y*k + z*m );
	    cout << ans << endl;
	}
	return 0;
}
