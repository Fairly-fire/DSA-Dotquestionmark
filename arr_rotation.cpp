#include<iostream>
using namespace std;
int main(){
    int n=8,d=3;
    cin>>n>>d;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int k = 0; k< n; k++){
         b[k]=a[(k+d)%n];    
    }
    for (int i = 0; i< n; i++){
        cout<<b[i]<<" ";
    }
return 0;
}