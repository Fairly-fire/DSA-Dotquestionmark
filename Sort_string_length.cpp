//Sort an array of strings according to string lengths
#include <bits/stdc++.h>
using namespace  std;
 
// Function to check the small string
bool compare(string &s1,string &s2)
{   if(s1.length()==s2.length()){
      return s1.size() < s2.size();
  }
  else{
    return s1<s2;
  }
}
 
// Function to print the sorted array of string
void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] << " ";
}
 
// Driver function
int main()
{
    string arr[] = {"APPLE", "I", "AM", "LOVER"};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    // Function to perform sorting
    sort(arr, arr+n, compare);
 
    // Calling the function to print result
    printArraystring(arr, n);
     
    return 0;
}
