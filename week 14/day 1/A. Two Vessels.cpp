#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t; 
	while(t--)
	{
		int a,  b, c; cin >> a >> b >> c;
		float d = (float)abs(a-b)/2 ;
		int x = ceil((float)d/c );
		cout << x << endl;
	}
}