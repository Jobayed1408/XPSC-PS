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
	    int n,mx=0;
	    cin>>n;
	    map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        mp[a]++;
	        mx=max(mx, mp[a]);
	    }
	    std::cout << n-mx << std::endl;
	}
	return 0;
}