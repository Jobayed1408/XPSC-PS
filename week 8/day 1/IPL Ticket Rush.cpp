#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x , y; cin>> x>> y;
	    if(x-y <=0 ) cout << 0<<endl;
	    else cout << x-y << endl;
	}
	return 0;
}