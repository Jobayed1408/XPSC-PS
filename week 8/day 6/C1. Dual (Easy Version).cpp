#include <bits/stdc++.h>
using namespace std;
int n,a[30],b[30];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
    vector<pair<int,int>>ans;
    int mn=0,mx=0;
    for(int i=1;i<=n;i++){
        if(a[i]>a[mx])mx=i;
        if(a[i]<a[mn])mn=i;
    }
    while(ans.size()<=32&&a[mx]+a[mn]<0){ans.push_back({mx,mx});a[mx]*=2;}
    for(int i=1;i<=n;i++)if(a[i]<0)ans.push_back({i,mx});
    for(int i=2;i<=n;i++)ans.push_back({i,i-1});
    if(ans.size()<=31){
        cout<<ans.size()<<endl;
        for(auto [x,y]:ans)cout<<x<<" "<<y<<endl;
        return;
    }
    ans.clear();
    while(ans.size()<=32&&b[mx]+b[mn]>0){ans.push_back({mn,mn});b[mn]*=2;}
    for(int i=1;i<=n;i++)if(b[i]>0)ans.push_back({i,mn});
    for(int i=n-1;i;i--)ans.push_back({i,i+1});
    cout<<ans.size()<<endl;
    for(auto [x,y]:ans)cout<<x<<" "<<y<<endl;
}
main(){
    int t=1;
    cin>>t;
    while (t--)solve();
}