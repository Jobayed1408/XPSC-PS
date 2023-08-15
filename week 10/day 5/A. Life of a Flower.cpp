#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>> t;
	while(t--)
	{
		int n; cin >> n; 
		int ar[n];
		for(int i=0; i<n ; i++) cin>> ar[i];
		
		int ans = 1;
		
		for(int i=0;i<n; i++)
		{
//			cout << ans << endl;
			
			if( i>0  and (ar[i] == ar[i-1] ) and  (ar[i]==1) ) ans += 5;
			else if(ar[i] == 1) ans++;
			else if(ar[i]==ar[i-1] and i>0 and ar[i]==0){
				ans = -1; break;
			}
		}
		cout << ans << endl;
		
	}
}