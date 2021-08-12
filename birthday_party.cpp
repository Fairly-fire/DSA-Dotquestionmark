#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        if (m%n==0){
            cout<<"Yes";
        }
        else
            cout<<"No";
    }
    return 0;
}