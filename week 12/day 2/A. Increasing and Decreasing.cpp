#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;  cin >> t;
	while(t--)
	{
		int a , b ,n;
		cin>>a>>b>>n;
		int x = b-a;
		if(x< ((n*(n-1))/2)) cout << -1 << endl;
		else 
		{
			cout << a << " ";
			vector<int> ar;
			int c= b;
			for(int i=1; i<=n-1; i++)
			{
				ar.push_back(b-i);
				b -= i;
			}
			sort(ar.begin() , ar.end());
			for(int i=1; i<ar.size() ; i++) cout << ar[i] <<" ";  
			cout << c << endl;
		}
	}
}