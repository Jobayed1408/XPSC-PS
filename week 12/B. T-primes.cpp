#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	long long n ;
	cin >> n ;
	while(n--)
  {
      set<int>st;
      long long x; cin>> x;
      if(x == 4) 
      {
        cout <<"Yes\n";
        continue;
      }
      if(!(x & 1) ) 
      {
        cout <<"No\n";
        continue;
      }
      long long k = sqrt(x);
      if(k*k != x) 
      {
        cout <<"No\n"; 
        continue;
      }
//      else if(  )
      bool b = true;
      for(long long i=2; i<k; i++)
      {
//        cout << i<< " "; 
        if(x%i == 0) 
        {
          cout << "No\n";
          b = false;
//          break;
        }
        if(!b) break;
//      cout << st.size() << endl;
      }
//      if(st.size() == 3)cout << "Yes" << endl;
      if(b)cout << "Yes\n" ;
  }
}