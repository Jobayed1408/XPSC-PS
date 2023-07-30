#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll a[3] , b[3];
		for(int i=0; i<3; i++)
			cin >> a[i] >> b[i] ;
		ll x =0 , y = 0 , ans = 1;
		if(a[1] >= a[0] and a[2] >= a[0])
		{
			x = min(abs(a[1]-a[0]) , abs(a[2] - a[0]));
//			cout << x <<" ";
		}
		if(a[0] >= a[1] and a[0] >= a[2])
		{
			x = min(abs(a[1]-a[0]) , abs(a[2] - a[0]));
//			cout << x <<" ";
		}
		
		if(b[1] >= b[0] and b[2] >= b[0])
		{
			y = min(abs(b[1]-b[0]) , abs(b[2] - b[0]));
//			cout << " " << y << endl;
		}
		if(b[0] >= b[1] and b[0] >= b[2])
		{
			y = min(abs(b[1]-b[0]) , abs(b[2] - b[0]));
//			cout << " " << y << endl;
		}
		
		ans = ans + x+y;
		cout << ans << endl;
	}
}