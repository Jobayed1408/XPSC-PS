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
                int m = 0 ,o = 0;
                for(int i=0; i<n; i++) 
                {
                        cin>>ar[i];
                        if(ar[i]%2 == 0) m+=ar[i]; 
                        else o+=ar[i];
//                        cout << ar[i]<<" ";
                }
                if(m>o) cout <<"yes\n";
                else cout << "no\n";
                
                
                
        }
        return 0;
}