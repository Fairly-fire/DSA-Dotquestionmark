#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3];
    int sum1=0,sum2=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if((i+j)%2==0){
                sum1+=a[i][j];
            }
            else if((i+j)%2!=0){
                sum2+=a[i][j];
            }
        }
    }
    cout<<sum1<<endl<<sum2;
}