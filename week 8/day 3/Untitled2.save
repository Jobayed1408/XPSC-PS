
#include <iostream>
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
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};



void solve(){   

    int n;
    cin>>n;

    vi a(n-1);
    forn(i,0,n-1) cin>>a[i];

    int k = n*(n+1)/2;

    forn(i,0,n-1){
        if(a[i] > k){
            cout<<"no\n";
            return;
        }
    }
    
    a.insert(a.begin(), 0);

    vi arr;
    forn(i,1,n) arr.pb(a[i]-a[i-1]);
    

    set<int> st;
    forn(i,1,n+1) st.insert(i);

    // for(auto i: st)cout<<i<<' ';
        // cout<<'\n';

    int d = -1;
    map<int,int> mp;

    forn(i,0,arr.size()){

        // cout<<arr[i]<<' '<<d<<'\n';

        if(arr[i] <= n and st.count(arr[i])){
            st.erase(arr[i]);
        }
        else{
            // cout<<d<<' ';
            if(d != -1){
                cout<<"no\n";
                return;
            }
            d = arr[i];
        }
    }
    // cout<<d<<' ';

    if(d == -1){
        cout<<"yes\n";
        return;
    }

    for(auto i: st) d -= i;

    if(d == 0){
        cout<<"yes\n";
    }else cout<<"no\n";

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