#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
int main() {
        cin>>T;
        while(T--)
        {
                int n; cin>>n; 
                int ar[n];
                int ans = 0;
                int k = 0;
                for(int i=0; i<n; i++) 
                {
                        cin>>ar[i];
                        ans = __gcd(ar[i] , ans);
//                        cout << ans << " ";
                }
                if(ans == 1) {
                        cout << 0 << endl;
                continue;
                }
//                cout << endl;
                for(int i=1; i <= n; i++)
                {
                        if(__gcd(ans , i) == 1) k = min(3, n-i+1);
                }
                cout << k << endl;
        }
        return 0;
}