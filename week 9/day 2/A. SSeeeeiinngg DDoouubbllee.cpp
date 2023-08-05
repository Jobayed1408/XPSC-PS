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

        string s; cin>> s;
        string s2 = "";
        s2 += s;
        reverse(s.begin(), s.end());
        s2 += s;
        cout << s2 << endl;
//        for(int i=0; i<s.size(); i++)
//        {
//            
//        }
    }
}

int  main(void)
{
    solve();
} 