#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
int main() {
        cin>>T;
        while(T--)
        {
			int n; cin>>n;
			int ar[n];
			for(int i=0; i<n; i++) cin>> ar[i];
			int o = (ar[0] & 1) , e = (ar[1] & 1);
			bool ok = true;
			for(int i=2; i<n; i++)
			{
				if(i % 2 == 0)
				{
					if( (ar[i]&1) != o ) {ok = false; break;}
				}
				else 
				{
					if((ar[i]&1) != e ){ok=false; break;}
				}
			}
			if(ok) cout << "yes\n";
			else cout << "no\n";
        }
        return 0;
}
