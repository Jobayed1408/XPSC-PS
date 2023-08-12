#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int t;cin>>t;
//    while(t--)
//    {
        int n;cin>>n;
        
        if(n==2) cout << 2 << endl;
        else 
	   {
	   	int sum = 0;
	   	for(int i=1; i<=n; i++)
		{
			sum+=i*(i);
		}
//		sum += n*(n-1);
		
		cout << sum << endl;
	   }
//    }
}