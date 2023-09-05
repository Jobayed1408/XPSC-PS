#include<bits/stdc++.h>
using namespace std;
//#define freq[n+1] = 0


void solve()
{
	int n; cin >> n; 
	long long int ar[n]; 
	int freq[n+1] = {0};
	for(int i=0; i<n; i++) 
	{
		int x; 
		cin>> x;
		while(x > n)
		{
			x /= 2;
		}
		freq[x]++;
		
	}
	
	bool  b = true;
	for(int i=n;i>0;i--){
		if(freq[i]==0){
			b=false;
			break;
		}
//		cout << freq[i] << endl;
		freq[i/2]+=freq[i]-1;
	}
	
	if(b) cout << "YES\n";
	else cout << "NO\n";
	
}

int main()
{
	int t; cin >> t; 
	while(t--)
	{
		solve();
	}
}