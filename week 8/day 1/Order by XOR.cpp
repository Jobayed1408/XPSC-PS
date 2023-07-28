#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		 int a,b,c;
        cin>>a>>b>>c;
        int i=0;
        int x=0;
        int k=0;
        for(;i<=31;i++){
            if((a^x)<(b^x) && (b^x)<(c^x)){
                cout<<x<<endl; break;
                k = 1;
            }
            x=x<<1;
            x=(x^1);
        }
        if(k==0) cout<<-1<<endl;
	}
}