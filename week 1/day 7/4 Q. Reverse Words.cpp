#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
//	cin.ignore();
	getline(cin, s, '\n');
    
    
		stack<char>st;
	for(char c : s)
	{
		if( c!=' ' )
		{
			st.push(c);
//			cout<<"Push\n";
		}
		else
		{
			while(!st.empty())
			{
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
		
	}
	
			while(!st.empty())
			{
				cout<<st.top();
				st.pop();
			}
	
//	cout<<s.size()<<endl;
	
	
}