//#include<bits/stdc++.h>
//using namespace std;
//int T,n,a[200005];
//void solve()
//{
//	
//int n; cin>>n;
//		 string s;
//		 cin>> s;
//		 bool ok = false;
//		 for(int i=0; i<n-2; i++)
//		 {
//			for(int j=i+2; j<n; j++)
//			{
//				if(s[i]==s[j] and s[i+1]==s[j+1])
//					{
//						cout << "yes\n";
//						return;
//					}
//			}
//		 }
//		 cout <<"No\n";
//}
//int main() {
//        cin>>T;
//        while(T--)
//        {
//		 solve();
//                
//        }
//        return 0;
//}

#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void solve()
	{
		cin>>n>>s;
		int ok=0;
		for(int i=0;i<n-1;i++){
		string tmp="";
		tmp=tmp+s[i]+s[i+1];
		
		if(s.find(tmp,i+2) != s.npos)
		{
			cout << s.find(tmp,i+2) << " " << s.npos <<endl;
			ok=1;
		
		}
	}
	cout<<(ok?"YES":"NO")<<endl;
}
int main(){
int t;cin>>t;
while(t--){solve();}
return 0;
}
	