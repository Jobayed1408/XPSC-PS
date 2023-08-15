#include<iostream>
using namespace std;
int t,n,a[200003];
int main(){
	cin>>t;
	while(t--){
		long long int a ,b , c  ,ans = 0;
		cin >> a>> b>> c;
		int k = c/2; a = a+c-k;
		b = b+k;
		if(a>b ) cout <<"First\n";
		else cout <<"Second\n";
	}
}

