#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		int n,  k;
		cin>>n>>k;
		vector<int> a(n);
		for(int i=0; i<n; i++)
			cin>>a[i];
		int max_val = 0, i_max = 0, j_max=0, x_max= 0;
		for(int b = k-1; b>=0; b--)
		{
			int mask = (1 << b);
			vector<int>vals;
			for(int i=0; i<n; i++)
			{
				vals.push_back(a[i] & mask);
			}
			sort(vals.begin() , vals.end());
			int val = 0, i_idx = 0, j_idx = 0;
			for(int i=0; i<n; i++)
			{
				while(j_idx < n and vals[j_idx] < (mask | vals[i])) j_idx++;
				if(j_idx == n) break;
			
				int cur_val = (vals[i] & vals[j_idx]) ^ mask;
				if(cur_val > val)
				{
					val = cur_val;
					i_idx = i;
					j_idx = j_idx;
				}
			}
			if(val > max_val)
			{
				max_val = val;
				i_max = i_idx;
				j_max = j_idx;
				x_max |= mask;
			}
		}
		cout<<i_max+1 <<" "<<j_max+1<< " "<<x_max<<endl;
	}
}