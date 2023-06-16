#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,s; cin>>k>>s;
	int c=0;
//	int sum = 0;
	for(int i=0; i<=k; i++)
	{
		for(int j=0; j<=k; j++)
		{
			int a = s - i - j;
			if(a>=0 and a<=k)
				c++;
		}
	}
	cout<<c<<endl;
}    
                   