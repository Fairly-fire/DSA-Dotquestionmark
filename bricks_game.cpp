#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0,motu=0,patlu=0;
    cin>>n;
    for(i=1;i<=n;i++){
        patlu=patlu+i;
        motu = motu+ (2*i);
        sum = motu+patlu;
        if(sum>=n){
            break;
        }
    }
    if(n>(sum-(2*i))){
        cout<<"Motu";
    }
    else
    cout<<"Patlu";
    return 0;
}