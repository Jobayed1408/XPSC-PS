#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//long long gcd(long long int a, long long int b)
//{
//    if (b == 0)
//	   return a;
//   
//    return gcd(b, a % b);
//}
// 
//
//long long lcm(int a, int b) {
//	 return (a / gcd(a, b)) * b;
//}


void solve()
{
	ll n , a, b; cin>> n >> a >> b;
	ll x= 0 , y = 0;
//	vector<ll> v ;
//	vector<ll> ar ;
	ll c , d ;
	//ll x , y;
	c = n / ((a*b ) / __gcd(a,b) ) ; //cout << "C = " << c << endl;
	a = n/a;  //cout << "a = " << a << endl;
	b = n/b;  //cout << "b = " << b << endl;
	a -= c; 
	b -= c;
	y = (b* (b+1)) / 2;
	x = ((n * (n+1)) / 2) - ( ( (n-a) * (n-a + 1) ) / 2);
	cout << x - y << endl; 
//	while(c <=n) 
//	{ 
//		if(c % b == 0 ) plus += 0;
//		else  
//		{
//			v.push_back(c) ;
//			plus += m;
//			m--;
//		}
//		c += a;
//	}
//	cout << v.size() << endl;
//	while(d <= n)
//	{
//		if(d%a == 0 ) plus += 0;
//		else
//		{
//			ar.push_back(d) ;
//			minus += x;
//			x++;
//		}
//		d += b;
//	}
//	cout << plus - minus << endl;
//	ll s1 , s2 , s3 ;
//	ll k = 
}

int main()
{
	int t; cin >> t; 
	while(t--)
		solve();
}
