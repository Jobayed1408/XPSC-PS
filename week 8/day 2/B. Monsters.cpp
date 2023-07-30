#include <bits/stdc++.h>
// #include "utilities.cpp"
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define mod 1000000007; 
int row[] = {1,0};
int col[] = {0,1};


void solve(){   

    int n,k;
    cin>>n>>k;

    vpp a;
    forn(i,0,n){
        int x; cin>>x;
        x = x%k;
        a.pb({x,i});
    }

    vi ans;
    for(int i=0; i<n; i++){
        if(a[i].first == 0) ans.pb(i);
    }

    sort(rall(a));

    int i = 0;
    while(i < n){

        int k = a[i].first;
        vector<int> temp;
        while(i < n and a[i].first == k){
            temp.pb(a[i].second);
            i++;
        }
        if(k == 0) continue; 

        sort(all(temp));
        for(auto k: temp){
            ans.pb(k);
        }
    }

    for(auto i: ans) cout<<i+1<<' ';
        cout<<'\n';
}       



signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}