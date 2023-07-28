#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int x , y; cin>> x>> y;
	    if(x * 15 >= y*2) cout<< "Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
