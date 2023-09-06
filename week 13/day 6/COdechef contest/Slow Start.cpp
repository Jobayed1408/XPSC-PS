#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>> t;
	while(t--)
	{
	    int x , h; cin >> x >> h;
	    int k = x/2;
	    int ans = 0;
	    int b = 0 ;
	    for(int i=0; i<5; i++)
	    {
	        ans += k;
	        if(ans >= h)
	        {
	            ans = i+1;
	            b = 1;
	            break;
	        }
	    }
//	    cout << ans << endl;
	    if(!b)
	    {
	         ans = h - ans;
	         int s = ceil((float)ans / x);
	         cout << s+5 << endl;
	    }
	    else cout << ans << endl;
	}
	return 0;
}
