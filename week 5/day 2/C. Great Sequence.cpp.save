#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n , m; cin>>n>>m;
		vector<ll> arr(n);
		for(ll i=0; i<n; i++) cin>>arr[i];
		
		sort(arr.begin(), arr.end() );
		ll ans = 0;
//		int k = arr.size();
		for(ll i=0; i<n; i++)
		{
			if(arr[i] != -1)
			{
				ll tr = arr[i] * m;
//				cout<<tr<<endl;
				ll found = -1;
				ll l = i+1, h = n-1;
				while(l<=h)
				{
					ll mid = l+((h-l)/2); 
					if(arr[mid] == tr) {
						found = mid;
						h = mid - 1;
					}
					else if(arr[mid] < tr) 
					{
						l= mid+1;
					}
					else h =mid -1;
					
				}
				if(found == -1) ans++;
				else arr[found] = -1;
			}
			
//			bool b = true;
//			
//			for(int j=i+1; j<arr.size(); j++)
//			{
////				vector<int>:: iterator it;
////				it = arr.begin(); 
//				if(arr[i]*m == arr[j]) 
//				{
//					arr.erase(arr.begin()+j);
//					b = false;
//					break;
//				}
////				else ans++;
//			}
//			if(b) ans++;
//			cout<<"SIze = "<<arr.size()<<endl;
		}
		cout<<ans <<endl;
		
	}
	
}