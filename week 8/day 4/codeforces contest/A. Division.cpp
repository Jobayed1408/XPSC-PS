#include<bits/stdc++.h>
using namespace std;
int T,n,a[200005];
int main() {
        cin>>T;
        while(T--)
        {
        	int n; cin>>n;
                if(n <= 1399) cout << "Division 4\n";
                else if(n >1399 and n <=1599) cout << "Division 3\n";
                else if(n >1599 and n <=1899) cout << "Division 2\n";
                else cout << "Division 1\n";
                
        }
        return 0;
}
//For Division 1: 1900≤rating
//For Division 2: 1600≤rating≤1899
//For Division 3: 1400≤rating≤1599
//For Division 4: rating≤1399