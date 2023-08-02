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
                }
                sort(ar, ar+n);
               
			if(ar[0] != 1) 
			{
				cout << "No\n";
				continue;
			}
			
                long long sum = ar[0];
                for(int i=1; i<n; i++)
			 {
			 	if(ar[i] <= sum)
					sum+=ar[i];
				else {
					sum = -1; break;
				}
//				cout << sum << endl;
			 }
			 if(sum==-1) cout <<"No\n";
			 else cout << "Yes\n";
        }
        return 0;
}