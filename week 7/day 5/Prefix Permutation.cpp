#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    if(n%2 != 0){
		cout<<-1;
	    }
	    else 
	    {
			int ar[n+1];
		    int k = 1;
		    for(int i=1; i<=n; i+=2)
		    {
			ar[i] = k*2;
			k++;
		    }
		    k=0;
		    for(int i=2; i<=n; i+=2)
		    {
			ar[i] = (2*k)+1;
			k++;
		    }
		    for(int i=1; i<=n; i++)
			cout<<ar[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}