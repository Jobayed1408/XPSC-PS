#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	long long n , m;
	cin >> n  >> m;
	vector<int> a;
	for(long long i=1; i*i<n; i++)
	{
		if(n%i == 0) 
		{
			a.push_back(i);
			a.push_back(n/i);
		}
		
	}
	sort(a.begin() , a.end());
	if(a[m-1]!=0)cout << a[m-1]<< endl;
	else cout << -1 << endl;
}