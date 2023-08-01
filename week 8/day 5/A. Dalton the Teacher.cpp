#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int ar[n+1];
		int c = 0, k=0;
		for(int i=1; i<n+1; i++)
		{
			int x; cin>>x; 
			if(x == i) c++;
		}
		if(c&1) cout <<c/2+1 << endl;
		else cout << c/2 << endl;
//		if(c==1) cout << 1 << endl;
//		else if(c==n){
//			if(n & 1) cout << n/2+1 << endl;
//			else cout << n/2 << endl;
//		}
//		else if(c > 1)
//			cout << c-1 << endl;
//		else cout << 0 << endl;
	}
}