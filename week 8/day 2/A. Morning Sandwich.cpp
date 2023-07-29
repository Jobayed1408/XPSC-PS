#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int a ,b ,c; cin>>a >> b >> c;
		int x = b+c;
		if( a < x) cout << 2 * a -1 << endl;
		else if(x < a) cout << 2 * x + 1 << endl;
		else cout << 2*a-1 << endl;
	}
}