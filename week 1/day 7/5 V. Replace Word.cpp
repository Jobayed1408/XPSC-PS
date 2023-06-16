#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin>>s;
	string s2 = "EGYPT";
	int k =0 ;
	for(int i=0; i<s.size(); i++)
	{
		if(s2[k] == s[i])
		{
//			cout<<s2[k]<<" ";
			k++;
			for(int m=k; m<5; m++)
			{
				if(s2[k] != s[i+k]) {
					break;     
				}
				k++;
//				cout<<s2[k]<< " "<<k<<" ";
			}
			i=i+k;
			if(k<5)
			{
				for(int m = 0; m<k; m++)
				{
					cout<<s[i - k + m];
				}
			}
			else if(k == 5) cout<<" ";
//		cout<<i<<" ";
			k=0;
			i--;
		}
		else cout<<s[i];
		
	}
}