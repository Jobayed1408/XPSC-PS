#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr , arr+n);
        vector<long>b;
        vector<long>c;
        bool flag = true;
//        b.push_back(arr[n-1]);
        for(int i=n-1; i>=0 ; i--)
	   {
	   	 if(arr[i] == arr[i-1] and flag)
		 {
		 	b.push_back(arr[i]);
//		 	flag = false;
		 }
		 else if(arr[i] != arr[i-1] and flag)
		 {
		 	b.push_back(arr[i]);
		 	flag = false;
		 }
		 else 
		 {
		 	c.push_back(arr[i]);
		 }
	   }
	   
	   
        
//        for(int i=0; i<n; i++)
//	   {
//	   	if(arr[i] % 2 == 0) b.push_back(arr[i]);
//	   	else c.push_back(arr[i]);
//	   }
//	   int flag = 0;
	   if(b.size()==0 or c.size()==0) 
	   {
	   	cout << -1 << endl;
	   }
	   else 
	   {
	   	cout << c.size() << " " << b.size() << endl;
	   	for(int i=0; i<c.size(); i++) cout << c[i] <<" ";
		cout << endl;
	   	for(int i=0; i<b.size(); i++) cout << b[i] <<" ";
		cout << endl;
	   	
	   }
//        
//        if(flag)
//	   {
//		
//	   }
        
    }
}