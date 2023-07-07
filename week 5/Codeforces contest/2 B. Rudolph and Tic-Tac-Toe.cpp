#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    char ch='.';
    for( int i=0; i<3 ; i++) {
        if( str1[i]==str2[i] && str1[i]==str3[i]) {
            ch=str1[i];
        }
    }

    if(str1[0]==str1[1] && str1[0]==str1[2]) {
        ch = str1[0];
    }
    if(str2[0]==str2[1] && str2[0]==str2[2]) {
        ch = str2[0];
    }
    if(str3[0]==str3[1] && str3[0]==str3[2]) {
        ch = str3[0];
    }
    if(str1[0]==str2[1] && str1[0]==str3[2]) {
        ch = str1[0];
    }
    if(str3[0]==str2[1] && str3[0]==str1[2]) {
        ch = str3[0];
    }

    if(ch=='.') {
        cout<< "DRAW" <<endl;
    }
    else {
        cout<< ch <<endl;
    }
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
//		char arr[3][3];
//		for(int i=0; i<3; i++)
//		{
//			for(int j=0; j<3; j++)
//			{
//				cin>>arr[i][j];
//			}
//		}
//		
//		char ch = '.';
//		
//		if(arr[0][0]== arr[0][1] && arr[0][1] == arr[0][2]) {
//				ch = arr[0][0];
////				if(arr[0][0] != '.') cout<<arr[0][0]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[1][0]== arr[1][1] && arr[1][1] == arr[1][2]) {
//				ch = arr[1][0];
////				if(arr[1][2] != '.') cout<<arr[1][2]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[2][0]== arr[2][1] && arr[2][1] == arr[2][2]){
//				ch = arr[2][0];
////				if(arr[2][2] != '.') cout<<arr[2][2]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[0][0]== arr[1][1] && arr[1][1] == arr[2][2]) {
//				ch = arr[0][0];
////				if(arr[1][1] != '.') cout<<arr[1][1]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[0][2]== arr[1][1] && arr[1][1] == arr[2][0]) {
//				ch = arr[0][2];
////				if(arr[1][1] != '.') cout<<arr[1][1]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[0][0]== arr[1][0] && arr[1][0] == arr[2][0]) {
//				ch = arr[0][0];
////				if(arr[1][0] != '.') cout<<arr[1][0]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[0][1]== arr[1][1] && arr[1][1] == arr[2][1]) {
//				ch = arr[0][1];
////				if(arr[1][1] != '.') cout<<arr[1][1]<<endl;
////				else cout << "DRAW\n";
//		}
//		else if(arr[0][2]== arr[1][2] && arr[1][2] == arr[2][2]) {
//				ch = arr[0][2];
////				if(arr[1][2] != '.') cout<<arr[1][2]<<endl;
////				else cout << "DRAW\n";
//		}
//		if(ch == '.')
//			cout<<"DRAW"<<endl;
//		else cout<<ch<<endl;
		
	}
}