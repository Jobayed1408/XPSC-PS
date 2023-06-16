#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		int ee_c = 0 , eo_c = 0 , oe_c = 0 , oo_c = 0;
		for(int i=1; i<=n ; i++)
		{
			cin>>arr[i];
			if(i%2 == 0) 
			{
				if(arr[i]%2==0) ee_c++;
				else eo_c++;
			}
			else 
			{
				if(arr[i]%2==0) oe_c++;
				else oo_c++;
			}
		}
		
//		cout<<"ee-C " <<ee_c<<" "<<" eo_c "<<eo_c<<" "<<" oe_c "<<oe_c<<" "<<" oo_c "<<oo_c<<endl;
		
		if(ee_c>0 and eo_c > 0)  cout<<"NO\n";
		else if (oe_c>0 and oo_c>0) cout<<"NO\n";
		else cout<<"YES\n";
	}
}