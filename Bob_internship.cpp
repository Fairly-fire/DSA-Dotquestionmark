#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int count=0,d;
        d=n;
        while(1){
            if((d-k)>=m){
                count++;
                d--;
            }
            else{
                k++;
                d=n;
            }
            if(k==n){
                break;
            }
            
        }
        cout<<count%(int)(pow(10,9)+7)<<endl;
    }
    return 0;
}