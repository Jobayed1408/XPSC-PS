#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
         int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0;i < n;i++)
            cin >> a[i];
        pbds<long long> p;
        long long ans = 0;

        for (int i = 0;i <n;i++)
        {
            if (i == 0)
                p.insert(a[i]);
            else
            { 
                p.insert(a[i]); 
                ll tot = (ll)p.size() , big, small; 
                small = p.order_of_key(a[i]);
                small++;
                big = (tot - small); 
                ans+=big;  
//                cout <<  a[i] <<" " << tot <<" "<<small<<" " <<big <<" " <<p.order_of_key(a[i])<< " "<< ans << " \n";
    //            cout << p.order_of_key(a[i]) <<" "; 
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}