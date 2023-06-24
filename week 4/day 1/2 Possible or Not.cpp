#include <bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;
void solve()
{
    ll n, b;
    cin >> n >> b;
    vector<ll> v;
    
    while (n--)
    {
        ll a;
        cin >> a;

        ll vl = a & b;
        if (vl == b)
        {
            v.push_back(a);
        }
    }
    if (v.size() == 0)
    {
        cout<<"NO\n";
        return;
    }
    ll ans = v[0]; 
    for (int i = 1; i < v.size(); i++)
    {
        ans = ans & v[i];
    }
    if (ans == b)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--) solve();
    
}