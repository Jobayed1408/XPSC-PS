#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
void solve()
{
        int n; cin>>n; 
                string s; cin>> s;
                int x=0, y=0;
                for(int i=0; i<n; i++)
                {
                        if(s[i] == 'U') x++;
                        if(s[i] == 'D') x--;
                        if(s[i] == 'R') y++;
                        if(s[i] == 'L') y--;
//                        cout << x <<" "<<y << endl;
                        if(x==1 and y == 1) 
                        {
                                cout <<"yes\n"; return;
                        }
                }
                cout << "no\n";
}
int main() {
        cin>>T;
        while(T--)
        {
                
                solve();
        }
        return 0;
}