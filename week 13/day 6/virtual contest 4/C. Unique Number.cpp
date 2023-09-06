//#include<bits/stdc++.h>
//using namespace std;
//
//int value(int n)
//{
//	string s = {"123456789"};
//	string s2 = "";
//			{int cnt  = 0;
//	for(int i=0; i<9; i++)
//	{
//		for(int j=i+1; j<9; j++)
//		{
//			if(i == j) continue;
//			else
//				if(s[i]-'0' + s[j]-'0' == n) 
//				{
//					cnt++;
//					cout << cnt <<endl; 
//					s2+=s[i];
//					s2+=s[j];
//					break;
//				}
//			}
//		}
//	}
////	cout << s2 << endl;
//	int a = stoi(s2);
//	return a;
//}
//
//void solve()
//{
//	int n; cin>> n;
//	if(n < 10) cout << n << endl;
//	else if(n > 45) cout << -1 << endl;
//	else 
//	{
//		cout << value(n) << endl;
//	}
//}
//
//int main()
//{
//	int t; cin >> t; 
//	while(t--) solve();
//}
// C++ program to print all possible
// substrings of a given string

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
vector<pair<int , int> >prefsum(512);
int k=0;
// Find all subsequences
void printSubsequence(string input, string output)
{
	// Base Case
	// if the input is empty print the output string
	if (input.empty()) {		
		{
		    stringstream geek;
		 
		    geek << output;
		 
		    // The object has the value 12345
		    // and stream it to the integer x
		    int x = 0 ;
		    geek >> x;
			int y = x;
			int sum = 0;
			while(y)
			{
				sum += y%10;
				y /= 10;
			}
		    // Now the variable x holds the
		    // value 12345
//		    cout << x  <<" ";
			prefsum[k] = {x, sum};
//			cout << prefsum[k] <<" ";
			k++;
		}
//		cout << output << endl	
		
		return;
	}

	// output is passed with including
	// the Ist character of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);
}

// Driver code
int main()
{
	// output is set to null before passing in as a
	// parameter
		string output = "";
		string input = "123456789";

		printSubsequence(input, output);
		sort(prefsum.begin() , prefsum.end());
//		for(int i=0; i<513; i++)
//			cout << prefsum[i].second << " ";
	int t; cin>> t; 
	while(t--)
	{
		int n; cin>> n;
		if(n>45 ) 
		{
			cout << -1 << endl;
			continue;
		}
		for(int i=0; i<513; i++)
		{
			if(prefsum[i].second == n)
			{
				cout << prefsum[i].first << endl;
				break;
			}
		}
	}
	return 0;
}


