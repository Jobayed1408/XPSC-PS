#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
int main() {
        cin>>T;
        while(T--)
        {
			int n; cin>>n;
			int ar[n];
			map<int , int>mp;
			for(int i=0; i<n; i++ ) 
			{
				cin>> ar[i];
				mp[ar[i]]++;
			}
			int ok = -1;
			for(auto i : mp)
			{
				if(i.second >= 3)
				{
					ok = i.first;
					break;
				}
			}
			
			cout << ok << "\n";
        }
        return 0;
}
