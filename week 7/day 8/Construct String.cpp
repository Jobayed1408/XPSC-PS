#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t; 
    while(t--)
    {
        int n; cin>>n;
        string s; cin>> s;
        
        string s2 = "";
        int i = 0;
        while(i>=0 and i<n)
        {
            int c = 1;
            while(s[i]==s[i+1]) 
            {
                
                c++;
                i++;
            }
            if(c>1 and (c %2 == 1)) 
            {
                cout << s[i];
            }
            
            else if(c>1 and (c%2 ==0))
                cout<<s[i]<<s[i];
            else cout << s[i];
            i++;
        }
        cout <<endl;
    }
	
	return 0;
}
