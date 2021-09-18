//https://practice.geeksforgeeks.org/problems/reverse-a-string/1/?problemStatus=solved&page=1&query=problemStatussolvedpage1

//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int end = str.length()-1;
  //Your code here
  for(int i=0;i<end;i++,end--){
     char temp;
     temp = str[i];
     str[i]=str[end];
     str[end]=temp;
  }
  return str;
}
