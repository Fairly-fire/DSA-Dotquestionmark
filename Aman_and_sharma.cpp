#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,r,x,t=0;
    cin>>d;
    for(int i =1;i<=d;i++){
        cin>>r>>x;
        float cir=(2*(22/7)*r);
        float dis=(100*x);
        if(cir<=dis){
            t++;
        }
    }
    cout<<t;
    return 0;
}