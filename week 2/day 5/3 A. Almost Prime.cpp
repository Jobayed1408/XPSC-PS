#include<bits/stdc++.h>
using namespace std;

	int freq[3010];
	int visited[3010];
int main()
{
	int ans=0;
	for(int i=2; i<=3010; i++ )
	{
		if(visited[i] == 0)
		for(int j = i*2; j<=3010; j+=i) visited[j] = 1;
	}
	
	int n; cin>>n; 
	
	for(int a=2; a<=n; a++)
	{
		int c=0;
		for(int i=2; i<=a; i++)
		{
			if(a%i == 0)
			{
				if(visited[i] == 0) 
				{
					c++;
				}
			}
		}
		if(c == 2) ans++;
	}
	cout<<ans<<endl;
}    
                   