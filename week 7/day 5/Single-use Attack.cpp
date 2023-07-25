#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x,y,h; cin>>x>>y>>h;
	    float n = ceil(1.0*(x -h)/y) + 1 ; 
	    cout<<n<<endl;
	}
	return 0;
}
