#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		string ans="";
		stack < char > st;
		reverse(s.begin() , s.end() );
		
		for(int i=0; i<n; i++)
		{
			if(s[i] == '0') 
			{
				i++;
				st.push(s[i]);
				i++;
				st.push(s[i]);
				string s2;
				while(!st.empty())
				{
					s2+=st.top();
//					cout<<st.top()<<" ";
					st.pop();
				}
				int num = stoi(s2);
				
				char ch = (num+96);
				ans += ch;
			}
			else 
			{
				char ch = s[i] - '0' + 'a' - 1;
				ans += ch;
			}
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
}