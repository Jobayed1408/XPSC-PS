#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int a,b; cin>>a>>b;
	    int c = 0;
	    if(b>a)
	    {
	        c = a+ (b-a)*2;
	    }
	    else c = b;
	    cout<<c<<endl;
	}
	return 0;
}
