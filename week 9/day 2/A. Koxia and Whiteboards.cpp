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

        ll n, m;
        ll sum=0;
        cin>>n >> m;
//        vector<long long int>ar(n);
//        vector<lo\\ng long int>arr(m);
//        list<int>l;
         list<int>l;
        for(long long  int i=0; i<n; i++)
        {
              int in;
            cin>>in;
            l.push_back(in);
            sum+=in;
        }
        l.sort();
        for(long long int i=0; i<m; i++)
        {
              int in;
              cin>>in;
              sum+=in;
              sum-=l.front();
              l.pop_front();
              l.push_back(in);
              l.sort();
        }
        cout<<sum<<"\n";
    }
}

int  main(void)
{
    solve();
} 