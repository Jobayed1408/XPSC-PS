#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;  i++)
	{
		cin>>a[i];
	}
	
	int k; cin>>k;
	queue<int>q;
	
	int j = 0;
	for(int i=0;i<n-k; i++)
	{
		while(j<n)
		{
			
			if(j < k-1)
			{
				if(a[j] < 0) q.push(a[j]);
				j++;
			}
			else{
				if(a[j] < 0) q.push(a[j]);
				if(q.empty()) cout<<0<<" ";
				else cout<<q.front()<<" ";
				if(a[i] < 0) q.pop();
				i++;
				j++;
			}
		}
		
	}
	
}