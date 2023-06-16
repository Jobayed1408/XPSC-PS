#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++) cin>>a[i];
	
	int l=0,r=1,c=0,cnt=0;
	sort(a,a+n);
	
	while(r<n)	
	{
		if(a[l] == a[r])
		{
			r++;
			c++;
		}
		else{
			if(a[l] == a[r]-1)
			{
				cnt = cnt+c+1;
			}
			l = r;
			r++;
			c=0;
		}
	}
	cout<<cnt<<endl;
		
}