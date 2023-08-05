#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(void)
{
//      cout<<"Click\n";
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout << n/2 + n%2 << endl;
        int l = 2 , r = n*3;
        while(l < r)
        {
            cout << l << " " << r << " ";
            l+=3;
            r-=3;
        }
        cout << endl;
    }
}

int  main(void)
{
    solve();
} 