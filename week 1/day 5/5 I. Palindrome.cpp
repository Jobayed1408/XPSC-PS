#include<bits/stdc++.h>
using namespace std;

int main()
{
	string n; cin>>n;
	string m = n;
	int s = n.size();
	bool flag = true;
	queue<char>str;
	for(int i=0,j=s-1; i<s; i++,j--)
	{
		str.push(n[j]) ;
		if(n[i] !=n[j]) flag = false;
	}
	int i=0;
	while(!str.empty())
	{
		
		
		if(str.front()=='0' and i== 0 )
		{
			str.pop();
		}
		else 
		{
			cout<<str.front();
			i++;
			str.pop();
		}
	}
	cout<<endl;
	if(flag) {
		cout<<"YES\n";
	}
	else cout<<"NO\n";
}